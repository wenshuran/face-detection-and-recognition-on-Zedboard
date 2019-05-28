#include <iostream>
#include <vector>
#include <unistd.h>
#include <fcntl.h>
#include <sys/mman.h>
#include "../include/vdma_parameters.h"
#include "../include/xil_io.h"
#include <opencv2/core/core.hpp>  
#include <opencv2/imgproc/imgproc.hpp>  
#include <opencv2/opencv.hpp>  
#include <string>
#include <stdlib.h>
#include <pthread.h>

#define RED_MASK 0xF800
#define GREEN_MASK 0x07E0
#define BLUE_MASK 0x001F

using namespace std;
using namespace cv;

typedef struct {
    unsigned int baseAddr;
    int vdmaHandler;
    int width;
    int height;
    int pixelLength;
    int fbLength;
    unsigned int* vdmaVirtualAddress;
    unsigned char* fb1VirtualAddress;
    unsigned char* fb1PhysicalAddress;
    unsigned char* fb2VirtualAddress;
    unsigned char* fb2PhysicalAddress;
} vdma_handle;

CascadeClassifier cascade; 
vector<pair<int, Mat>> inputFb;
vector<pair<int, Mat>> outputFb;
int inIndex = 0, outIndex = 0;
pthread_mutex_t mutex_in, mutex_out;
vdma_handle handle_s2mm, handle_mm2s;

unsigned int vdma_get(vdma_handle *handle, int num) {
    return handle->vdmaVirtualAddress[num>>2];
}

void vdma_set(vdma_handle *handle, int num, unsigned int val) {
    handle->vdmaVirtualAddress[num>>2]=val;
}

int vdma_setup(vdma_handle *handle, int vdmaHandler, unsigned int baseAddr, int width, int height, int pixelLength, unsigned int fb1Addr, unsigned int fb2Addr) {
    handle->baseAddr=baseAddr;
    handle->width=width;
    handle->height=height;
    handle->pixelLength=pixelLength;
    handle->fbLength=pixelLength*width*height;
    handle->vdmaHandler = vdmaHandler;
    handle->vdmaVirtualAddress = (unsigned int*)mmap(NULL, 65535, PROT_READ | PROT_WRITE, MAP_SHARED, handle->vdmaHandler, (off_t)handle->baseAddr);
    if(handle->vdmaVirtualAddress == MAP_FAILED) {
        perror("vdmaVirtualAddress mapping for absolute memory access failed.\n");
        return -1;
    }
 
    handle->fb1PhysicalAddress = (unsigned char*)fb1Addr;
    handle->fb1VirtualAddress = (unsigned char*)mmap(NULL, handle->fbLength, PROT_READ | PROT_WRITE, MAP_SHARED, handle->vdmaHandler, (off_t)fb1Addr);
    if(handle->fb1VirtualAddress == MAP_FAILED) {
        perror("fb1VirtualAddress mapping for absolute memory access failed.\n");
        return -2;
    }

    if(fb2Addr!=0){
    handle->fb2PhysicalAddress = (unsigned char*)fb2Addr;
    handle->fb2VirtualAddress = (unsigned char*)mmap(NULL, handle->fbLength, PROT_READ | PROT_WRITE, MAP_SHARED, handle->vdmaHandler, (off_t)fb2Addr);
    if(handle->fb2VirtualAddress == MAP_FAILED) {
        perror("fb1VirtualAddress mapping for absolute memory access failed.\n");
        return -2;
    }
    }
    memset(handle->fb1VirtualAddress, 255, handle->width*handle->height*handle->pixelLength);
    if(fb2Addr!=0) memset(handle->fb2VirtualAddress, 255, handle->width*handle->height*handle->pixelLength);
    printf("Set up finish.\n");
    return 0;
}
 
 
void vdma_halt(vdma_handle *handle_s2mm,vdma_handle *handle_mm2s) {
    vdma_set(handle_s2mm, OFFSET_VDMA_S2MM_CONTROL_REGISTER, VDMA_CONTROL_REGISTER_RESET);
    vdma_set(handle_mm2s, OFFSET_VDMA_MM2S_CONTROL_REGISTER, VDMA_CONTROL_REGISTER_RESET);
    munmap((void *)handle_s2mm->vdmaVirtualAddress, 65535);
    munmap((void *)handle_mm2s->vdmaVirtualAddress, 65535);
    munmap((void *)handle_s2mm->fb1VirtualAddress, handle_s2mm->fbLength);
    munmap((void *)handle_mm2s->fb1VirtualAddress, handle_mm2s->fbLength);
    munmap((void *)handle_s2mm->fb2VirtualAddress, handle_s2mm->fbLength);
    munmap((void *)handle_mm2s->fb2VirtualAddress, handle_mm2s->fbLength);

}
 
void vdma_status_dump(int status) {
    if (status & VDMA_STATUS_REGISTER_HALTED) printf(" halted"); else printf("running");
    if (status & VDMA_STATUS_REGISTER_VDMAInternalError) printf(" vdma-internal-error");
    if (status & VDMA_STATUS_REGISTER_VDMASlaveError) printf(" vdma-slave-error");
    if (status & VDMA_STATUS_REGISTER_VDMADecodeError) printf(" vdma-decode-error");
    if (status & VDMA_STATUS_REGISTER_StartOfFrameEarlyError) printf(" start-of-frame-early-error");
    if (status & VDMA_STATUS_REGISTER_EndOfLineEarlyError) printf(" end-of-line-early-error");
    if (status & VDMA_STATUS_REGISTER_StartOfFrameLateError) printf(" start-of-frame-late-error");
    if (status & VDMA_STATUS_REGISTER_FrameCountIRQ) printf(" frame-count-interrupt");
    if (status & VDMA_STATUS_REGISTER_DelayCountIRQ) printf(" delay-count-interrupt");
    if (status & VDMA_STATUS_REGISTER_ErrorIRQ) printf(" error-interrupt");
    if (status & VDMA_STATUS_REGISTER_EndOfLineLateError) printf(" end-of-line-late-error");
    printf(" frame-count:%d", (status & VDMA_STATUS_REGISTER_IRQFrameCount) >> 16);
    printf(" delay-count:%d", (status & VDMA_STATUS_REGISTER_IRQDelayCount) >> 24);
    printf("\n");
}
 
void vdma_s2mm_status_dump(vdma_handle *handle) {
    int status = vdma_get(handle, OFFSET_VDMA_S2MM_STATUS_REGISTER);
    printf("S2MM status register (%08x):", status);
    vdma_status_dump(status);
}
 
void vdma_mm2s_status_dump(vdma_handle *handle) {
    int status = vdma_get(handle, OFFSET_VDMA_MM2S_STATUS_REGISTER);
    printf("MM2S status register (%08x):", status);
    vdma_status_dump(status);
}

void vdma_start_s2mm(vdma_handle *handle) {
    // Reset VDMA
    vdma_set(handle, OFFSET_VDMA_S2MM_CONTROL_REGISTER, VDMA_CONTROL_REGISTER_RESET);

    // Wait for reset to finish
    while((vdma_get(handle, OFFSET_VDMA_S2MM_CONTROL_REGISTER) & VDMA_CONTROL_REGISTER_RESET)==4);

    // Clear all error bits in status register
    vdma_set(handle, OFFSET_VDMA_S2MM_STATUS_REGISTER, 0);

    // Do not mask interrupts
    vdma_set(handle, OFFSET_VDMA_S2MM_IRQ_MASK, 0xf);

    int interrupt_frame_count = 2;
//    int delay_frame_count = 2;

    // Start both S2MM and MM2S in triple buffering mode
    vdma_set(handle, OFFSET_VDMA_S2MM_CONTROL_REGISTER,
//	(delay_frame_count << 16) |
        (interrupt_frame_count << 16) |
        VDMA_CONTROL_REGISTER_FrameCntEn |
//	VDMA_CONTROL_REGISTER_DlyCnt_IrqEn |
        //VDMA_CONTROL_REGISTER_CIRCULAR_PARK |
        VDMA_CONTROL_REGISTER_START
        );


    vdma_set(handle, OFFSET_PARK_PTR_REG, 0x100);

    while((vdma_get(handle, 0x30)&1)==0 || (vdma_get(handle, 0x34)&1)==1);

    // Extra register index, use first 16 frame pointer registers
    vdma_set(handle, OFFSET_VDMA_S2MM_REG_INDEX, 0);

    // Write physical addresses to control register
    vdma_set(handle, OFFSET_VDMA_S2MM_FRAMEBUFFER1, (unsigned int)handle->fb1PhysicalAddress);
    vdma_set(handle, OFFSET_VDMA_S2MM_FRAMEBUFFER2, (unsigned int)handle->fb2PhysicalAddress);

    // Write Park pointer register
    vdma_set(handle, OFFSET_PARK_PTR_REG, 0);

    // Frame delay and stride (bytes)
    vdma_set(handle, OFFSET_VDMA_S2MM_FRMDLY_STRIDE, handle->width*handle->pixelLength);

    // Write horizontal size (bytes)
    vdma_set(handle, OFFSET_VDMA_S2MM_HSIZE, handle->width*handle->pixelLength);

    // Write vertical size (lines), this actually starts the transfer
    vdma_set(handle, OFFSET_VDMA_S2MM_VSIZE, handle->height);
    int b = vdma_get(handle, OFFSET_VDMA_S2MM_STATUS_REGISTER);
    int a = vdma_get(handle, OFFSET_VDMA_S2MM_CONTROL_REGISTER);
}

void vdma_start_mm2s(vdma_handle *handle) {
    // Reset VDMA
    vdma_set(handle, OFFSET_VDMA_MM2S_CONTROL_REGISTER, VDMA_CONTROL_REGISTER_RESET);

    // Wait for reset to finish
    while((vdma_get(handle, OFFSET_VDMA_MM2S_CONTROL_REGISTER) & VDMA_CONTROL_REGISTER_RESET)==4);

    // Clear all error bits in status register
    vdma_set(handle, OFFSET_VDMA_MM2S_STATUS_REGISTER, 0);

    int interrupt_frame_count = 1;

    // Set buffer number
    vdma_set(handle, OFFSET_VDMA_MM2S_CONTROL_REGISTER,
        (interrupt_frame_count << 16) |
        VDMA_CONTROL_REGISTER_START
        );

    vdma_set(handle, OFFSET_VDMA_MM2S_FRAMEBUFFER1, (unsigned int)handle->fb1PhysicalAddress);

    // Write Park pointer register
    vdma_set(handle, OFFSET_PARK_PTR_REG, 0);

    // Frame delay and stride (bytes)
    vdma_set(handle, OFFSET_VDMA_MM2S_FRMDLY_STRIDE, handle->width*handle->pixelLength);

    // Write horizontal size (bytes)
    vdma_set(handle, OFFSET_VDMA_MM2S_HSIZE, handle->width*handle->pixelLength);

    // Write vertical size (lines), this actually starts the transfer
    vdma_set(handle, OFFSET_VDMA_MM2S_VSIZE, handle->height);
}

void* cvt565to888(void* arg){ 
    unsigned char* srcAddr = handle_s2mm.fb1VirtualAddress;   
    float factor5Bit = 255.0 / 31.0;
    float factor6Bit = 255.0 / 63.0;

    while(1){
	int done = vdma_get(&handle_s2mm, OFFSET_VDMA_S2MM_STATUS_REGISTER) & VDMA_STATUS_REGISTER_HALTED;
	if(((inIndex-outIndex) < 4) && (done == 1)){ 
	    Mat image888(480, 640, CV_8UC3); 
	    uchar* pxvec;

	    for(int i = 0; i < image888.rows; i++){
		pxvec = image888.ptr<uchar>(i);
        	for(int j = 0; j < image888.cols; j++){
	            unsigned short rgb565 = (srcAddr[i*640*2 + (2*j + 1)] << 8) | (srcAddr[i*640*2 + (2*j + 0)]);;
            	    unsigned char r5 = (rgb565 & RED_MASK)   >> 11;
            	    unsigned char g6 = (rgb565 & GREEN_MASK) >> 5;
            	    unsigned char b5 = (rgb565 & BLUE_MASK);

	            // round answer to closest intensity in 8-bit space...
            	    unsigned char r8 = floor((r5 * factor5Bit) + 0.5);
                    unsigned char g8 = floor((g6 * factor6Bit) + 0.5);
            	    unsigned char b8 = floor((b5 * factor5Bit) + 0.5);

	    	    pxvec[3 * j + 0] = b8;
	    	    pxvec[3 * j + 1] = g8;
	    	    pxvec[3 * j + 2] = r8;


            //image888.at<Vec3b>(i,j)[0] = b8;
            //image888.at<Vec3b>(i,j)[1] = g8;
	    //image888.at<Vec3b>(i,j)[2] = r8;

        	}
	    }
	    vdma_start_s2mm(&handle_s2mm);
	    pthread_mutex_lock(&mutex_in);
	    inputFb.push_back(make_pair(inIndex++, image888));
	    pthread_mutex_unlock(&mutex_in);
    	}
    }
}

void* cvtImage(void* arg){
    while(1){
	if(inputFb.size() == 0){
	    usleep(10);
	    continue;
	}
	pair<int, Mat> inImage;

	pthread_mutex_lock(&mutex_in);
	inImage = inputFb.front();
	inputFb.erase(inputFb.begin());
	pthread_mutex_unlock(&mutex_in);

	Mat image = inImage.second;
	std::vector<Mat>splitBGR(image.channels());
	split(image, splitBGR);
	for (int i = 0; i < image.channels(); i++)
	{
		equalizeHist(splitBGR[i], splitBGR[i]);//图像灰度均衡化
	}
	Mat dst;
	merge(splitBGR, dst);
        Mat dstImage = dst;  
        Mat grayImage(480, 640, CV_8UC1);  
        cvtColor(dst, grayImage, CV_BGR2GRAY); // 生成灰度图，提高检测效率  
        //printf("generate gray image\n");  
        Scalar color = CV_RGB(0, 255, 0);
        vector<Rect> rect;  
        cascade.detectMultiScale(grayImage, rect, 1.1, 1, 0);  // 分类器对象调用  
        printf("face number: %d\n", rect.size());  
  
        if(rect.size()!=0){
            for (int i = 0; i < rect.size();i++){  
                rectangle(dstImage, rect[i].tl(), rect[i].br(), color, 3, 4, 0);  
            }  
        }
	pthread_mutex_lock(&mutex_out);
	outputFb.push_back(make_pair(outIndex++, dstImage));
        pthread_mutex_unlock(&mutex_out);

    }
}

void* cvt888to565(void* arg){
    unsigned char* dstAddr = handle_mm2s.fb1VirtualAddress;
    uchar* pxvec;
    while(1){
	if(outputFb.size() == 0){
	    usleep(10);
	    continue;
        }

        pair<int, Mat> outImage;
        pthread_mutex_lock(&mutex_out);
        outImage = outputFb.front();
        outputFb.erase(outputFb.begin());
        pthread_mutex_unlock(&mutex_out);

        Mat mat = outImage.second;
        for(int i = 0; i < mat.rows; i++){
            pxvec = mat.ptr<uchar>(i);
            for(int j = 0; j < mat.cols; j++){
                uchar b8 = pxvec[3 * j + 0];
                uchar g8 = pxvec[3 * j + 1];
                uchar r8 = pxvec[3 * j + 2];


//            uchar b8 =  mat.at<Vec3b>(i, j)[0];
//            uchar g8 =  mat.at<Vec3b>(i, j)[1];
//            uchar r8 =  mat.at<Vec3b>(i, j)[2];

            // round answer to closest intensity in 8-bit space...
                uchar r5 = (r8 & 0xF8) >> 3;
                uchar g6 = (g8 & 0xFC) >> 2;
                uchar b5 = (b8 & 0xF8) >> 3;

                unsigned char r5g3 = (r5 << 3) | ((g6 & 0x38) >> 3);
                unsigned char g3b5 = ((g6 & 0x7) << 5) | b5;

                dstAddr[i*640*2 + (2*j + 0)] = g3b5;
                dstAddr[i*640*2 + (2*j + 1)] = r5g3;
            }
        }
    }
}

int main() {
    cascade.load("haarcascade_frontalface_alt2.xml");

    int Handler = open("/dev/mem", O_RDWR | O_SYNC);

    printf("Handler: %d\n", Handler);
    
    // Setup VDMA handle and memory-mapped ranges
    vdma_setup(&handle_s2mm, Handler, VDMA_S2MM, 640, 480, 2, 0x10000000, 0x10100000);
    vdma_setup(&handle_mm2s, Handler, VDMA_MM2S, 640, 480, 2, 0x11000000, 0);
	
    // Start triple buffering
    vdma_start_s2mm(&handle_s2mm);
    vdma_start_mm2s(&handle_mm2s);
    Xil_Out32(Handler, OV7670_STREAM, 1);

    printf("s2mm: %d\n", vdma_get(&handle_s2mm, OFFSET_VDMA_S2MM_STATUS_REGISTER));
    printf("mm2s: %d\n", vdma_get(&handle_mm2s, OFFSET_VDMA_MM2S_STATUS_REGISTER));

    pthread_mutex_init(&mutex_in,NULL); 
    pthread_mutex_init(&mutex_out,NULL); 

    pthread_t threadId[3];
    int ret0 = pthread_create(&threadId[0], NULL, cvt565to888, NULL);
    int ret1 = pthread_create(&threadId[1], NULL, cvtImage, NULL);
    int ret2 = pthread_create(&threadId[2], NULL, cvtImage, NULL);
    int ret3 = pthread_create(&threadId[3], NULL, cvt888to565, NULL);

    for(int i = 0; i < 4; i++){
        pthread_join(threadId[i],NULL);
    }    

//    free(a); 
    // Halt VDMA and unmap memory ranges
    vdma_halt(&handle_s2mm, &handle_mm2s);
    printf("Halt over\n");
    close(Handler);
}

