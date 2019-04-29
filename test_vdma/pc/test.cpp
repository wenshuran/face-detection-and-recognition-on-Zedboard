#include <iostream>
#include <vector>
#include <unistd.h>
#include <fcntl.h>
#include <sys/mman.h>
#include <opencv2/core/core.hpp>  
#include <opencv2/imgproc/imgproc.hpp>  
#include <opencv2/opencv.hpp>  
#include <string>

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
 
    //pthread_mutex_t lock;
} vdma_handle;

#define RED_MASK 0xF800
#define GREEN_MASK 0x07E0
#define BLUE_MASK 0x001F
/*
unsigned int vdma_get(vdma_handle *handle, int num) {
    return handle->vdmaVirtualAddress[num>>2];
}

void vdma_set(vdma_handle *handle, int num, unsigned int val) {
    handle->vdmaVirtualAddress[num>>2]=val;
}

int vdma_setup(vdma_handle *handle, int vdmaHandler, unsigned int baseAddr, int width, int height, int pixelLength, unsigned int fb1Addr) {
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
 
    memset(handle->fb1VirtualAddress, 255, handle->width*handle->height*handle->pixelLength);
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

    int interrupt_frame_count = 1;

    // Start both S2MM and MM2S in triple buffering mode
    vdma_set(handle, OFFSET_VDMA_S2MM_CONTROL_REGISTER,
        (interrupt_frame_count << 16) |
        VDMA_CONTROL_REGISTER_FrameCntEn |
        //VDMA_CONTROL_REGISTER_CIRCULAR_PARK |
        VDMA_CONTROL_REGISTER_START
        );


    vdma_set(handle, OFFSET_PARK_PTR_REG, 0x100);

    while((vdma_get(handle, 0x30)&1)==0 || (vdma_get(handle, 0x34)&1)==1);

    // Extra register index, use first 16 frame pointer registers
    vdma_set(handle, OFFSET_VDMA_S2MM_REG_INDEX, 0);

    // Write physical addresses to control register
    vdma_set(handle, OFFSET_VDMA_S2MM_FRAMEBUFFER1, (unsigned int)handle->fb1PhysicalAddress);

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

Mat cvt565to888(unsigned char* srcAddr){
    IplImage *rgb565Image = cvCreateImage(cvSize(640, 480), IPL_DEPTH_16U, 1);
    IplImage *rgb888Image = cvCreateImage(cvSize(640, 480), IPL_DEPTH_8U, 3);
    
    unsigned short* rgb565Data = (unsigned short*)rgb565Image->imageData;
    for(int i1 = 0; i1 < 480; i1++){
	for(int j1 = 0; j1 < 640; j1++){
	    rgb565Data[i1*640 + j1] = (srcAddr[i1*640*2 + (2*j1 + 0)] << 8) + (srcAddr[i1*640*2 + (2*j1 + 1)]);
	}
    }

    int rgb565Step = rgb565Image->widthStep / sizeof(unsigned short);

    uchar* rgb888Data = (uchar*)rgb888Image->imageData;

    float factor5Bit = 255.0 / 31.0;
    float factor6Bit = 255.0 / 63.0;

    for(int i = 0; i < rgb565Image->height; i++)
    {
        for(int j = 0; j < rgb565Image->width; j++)
        {
            unsigned short rgb565 = rgb565Data[i*rgb565Step + j];
            uchar r5 = (rgb565 & RED_MASK)   >> 11;
            uchar g6 = (rgb565 & GREEN_MASK) >> 5;
            uchar b5 = (rgb565 & BLUE_MASK);

            // round answer to closest intensity in 8-bit space...
            uchar r8 = floor((r5 * factor5Bit) + 0.5);
            uchar g8 = floor((g6 * factor6Bit) + 0.5);
            uchar b8 = floor((b5 * factor5Bit) + 0.5);

            rgb888Data[i*rgb888Image->widthStep + j]       = r8;
            rgb888Data[i*rgb888Image->widthStep + (j + 1)] = g8;
            rgb888Data[i*rgb888Image->widthStep + (j + 2)] = b8;
        }
    }
    Mat image = cvarrToMat(rgb888Image);
    if (!image.data){
	printf("convert 565 to 888 fail!");
	return image;
    }
    cvReleaseImage(&rgb888Image);
    printf("convert 565 to 888 over!\n");
    //cvReleaseImage(&rgb888Image);
    return image;
}

void cvt888to565(Mat mat, unsigned char* dstAddr){
    uchar* pimage = mat.data;
    for(int i = 0; i < 480; i++)
    {
        for(int j = 0; j < 640; j++)
        {
	    unsigned char r8 = pimage[i*640*3 + (3*j + 0)];
            unsigned char g8 = pimage[i*640*3 + (3*j + 1)];
            unsigned char b8 = pimage[i*640*3 + (3*j + 2)];

	    unsigned char r5 = (r8 & 0xF8) >> 3;
            unsigned char g6 = (g8 & 0xFC) >> 2;
            unsigned char b5 = (b8 & 0xF8) >> 3;

            unsigned short rgb565 = (r5 << 11) + (g6 << 5) + b5;
	    
            dstAddr[i*640*2 + (2*j + 0)] = (rgb565 & 0xFF00) >> 8;
	    dstAddr[i*640*2 + (2*j + 1)] = (rgb565 & 0xFF);
	}
    }
    printf("convert 888 to 565 over!\n");
    return;
}
int cvtImage(unsigned char* srcAddr, unsigned char* dstAddr, int j){
    //CvMat mCvmat = cvMat(640, 480, CV_8UC2, srcAddr);
    //IplImage* IpImg = cvDecodeImage(&mCvmat, 1);
    //opencv3.0 IplImage到Mat类型的转换的方法
    //Mat image = cvarrToMat(IpImg);    
    Mat image = cvt565to888(srcAddr);
    if (!image.data){
      memcpy(dstAddr, srcAddr, 640*480*2);
      printf("no image\n");  
      return 1;
    }
    CascadeClassifier cascade;  
    cascade.load("haarcascade_frontalface_alt2.xml");  
  
    Mat srcImage, grayImage, dstImage;  
    srcImage = image;  
    dstImage = srcImage.clone();  
     
    grayImage.create(srcImage.size(), srcImage.type());  
    cvtColor(srcImage, grayImage, CV_BGR2GRAY); // 生成灰度图，提高检测效率  
  
    Scalar color = CV_RGB(0, 255, 0);
    vector<Rect> rect;  
    cascade.detectMultiScale(grayImage, rect, 1.1, 3, 0);  // 分类器对象调用  
    printf("face number: %d\n", rect.size());  
  
    for (int i = 0; i < rect.size();i++)  
    {  
      rectangle(dstImage, rect[i].tl(), rect[i].br(), color, 3, 4, 0);  
    }  
    
    cvt888to565(dstImage, dstAddr);
    //memcpy(dstAddr, dstImage.ptr<double>(0), 640*480*2);
    //cvReleaseImage(&IpImg);
    return 0;
}
*/
 
int main() {
    /*
    vdma_handle handle_s2mm, handle_mm2s;
    int Handler = open("/dev/mem", O_RDWR | O_SYNC);

    printf("Handler: %d\n", Handler);
	
    // Setup VDMA handle and memory-mapped ranges
    vdma_setup(&handle_s2mm, Handler, VDMA_S2MM, 640, 480, 2, 0x10000000);
    vdma_setup(&handle_mm2s, Handler, VDMA_MM2S, 640, 480, 2, 0x11000000);
	
    // Start triple buffering
    vdma_start_s2mm(&handle_s2mm);
    vdma_start_mm2s(&handle_mm2s);
    Xil_Out32(Handler, OV7670_STREAM, 1);

    printf("s2mm: %d\n", vdma_get(&handle_s2mm, OFFSET_VDMA_S2MM_STATUS_REGISTER));
    printf("mm2s: %d\n", vdma_get(&handle_mm2s, OFFSET_VDMA_MM2S_STATUS_REGISTER));
    int i = 1000; 
    while(i>0){
    	if(vdma_get(&handle_s2mm, OFFSET_VDMA_S2MM_STATUS_REGISTER) & VDMA_STATUS_REGISTER_HALTED == 1){
          cvtImage(handle_s2mm.fb1VirtualAddress, handle_mm2s.fb1VirtualAddress, i);
	  //memcpy(handle_mm2s.fb1VirtualAddress, handle_s2mm.fb1VirtualAddress, 640*480*2);
 	  vdma_start_s2mm(&handle_s2mm);
	  i--;
        }
    } 
    
    //sleep(100);
    // Halt VDMA and unmap memory ranges
    vdma_halt(&handle_s2mm, &handle_mm2s);
    printf("Halt over\n");
    close(Handler);
   */ 
    VideoCapture capture;
    capture.open(0);
    if (capture.isOpened())
    {
        cout << "camera open!";
    }
    else{
        cout << "not open" << endl;
    }
    int i = 1000;
    while(1){

	Mat image;
	capture >> image;
        CascadeClassifier cascade;
        cascade.load("haarcascade_frontalface_alt2.xml");

        Mat srcImage, grayImage, dstImage;
        srcImage = image;
        dstImage = srcImage.clone();
	 grayImage.create(srcImage.size(), srcImage.type());  
    cvtColor(srcImage, grayImage, CV_BGR2GRAY);
        Scalar color = CV_RGB(0, 255, 0);
        vector<Rect> rect;
       cascade.detectMultiScale(grayImage, rect, 1.15 , CASCADE_SCALE_IMAGE, 0);  // 分类器对象调用  

        if(rect.size()){
	for (int i = 0; i < rect.size();i++){
	    cout << "wdz" << endl;
            rectangle(dstImage, rect[i].tl(), rect[i].br(), color, 3, 4, 0);
        }}
	imshow("test", dstImage);
waitKey(10);
}    
}

