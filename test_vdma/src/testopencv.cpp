#include <opencv2/core/core.hpp>
#include <opencv2/imgproc/imgproc.hpp>
#include <opencv2/opencv.hpp>
 
#include <vector>
#include <cstdio>
 
using namespace std;
using namespace cv;
 
int main()
{
	
	CascadeClassifier cascade;
	cascade.load("haarcascade_frontalface_alt.xml2");
 
	Mat srcImage, grayImage,dstImage;
	srcImage = imread("./lena.jpg");
	dstImage = srcImage.clone();
 
	grayImage.create(srcImage.size(), srcImage.type());
	cout << srcImage.cols << endl;
	cout << srcImage.rows << endl;

	cvtColor(srcImage, grayImage, CV_BGR2GRAY); // 生成灰度图，提高检测效率
 
	vector<Rect> rect;
	cascade.detectMultiScale(grayImage, rect, 1.1, 0, 0);  // 分类器对象调用
 
	printf("face number: %d\n", rect.size());
	return 0;
}
