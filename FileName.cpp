#include <opencv2/opencv.hpp>
#include <iostream>

using namespace std;
using namespace cv;

int main()
{
	Mat src = imread("image/LenaRGB.bmp");
	imshow("lalala", src);
	waitKey(0);
	return 0;
}
