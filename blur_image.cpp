#include <iostream> 
#include <opencv2/highgui.hpp> 
#include <opencv2/imgcodecs.hpp> 
#include <opencv2/imgproc.hpp> 

using namespace std; 
using namespace cv; 

int main() // we can use int main as well just don't forget 
			// to add return 0 in the end 
{ 
	string path = "face.jpeg"; 
	Mat img = imread(path); 

	Mat imgGray, Blur_img; //Defining Output Image matrix 

	cvtColor(img, imgGray, 
			COLOR_BGR2GRAY); // To convert image to 
							// grayscale image 
	GaussianBlur(img, Blur_img, Size(7, 7), 5, 
				0); // Now finally adding blur to the image 

	imshow("Image", img); // Image before the onversion 
	imshow("GrayImage",imgGray); // After Conversion to GrayScale 
	imshow("Blurimg", Blur_img); // Blurred Image 

	waitKey(0); // wait for keystroke
        return 0; 
}

