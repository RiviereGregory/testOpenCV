#include <QCoreApplication>
#include <stdio.h>
#include <stdlib.h>
#include <opencv/cv.h>
#include <opencv/highgui.h>
#include <iostream>

using namespace std;

int main (int argc, char* argv[])
{
  IplImage* img = NULL;
  const char* window_title = "Hello, OpenCV!";
  std::cout << "test" << std::endl;

  img = cvLoadImage("C:/opencv/samples/c/lena.jpg", CV_LOAD_IMAGE_UNCHANGED);

  if (img == NULL)
  {
    cout << "couldn't open image file: \n" << endl;
    return EXIT_FAILURE;
  }
  cvNamedWindow (window_title, CV_WINDOW_AUTOSIZE);
  cvShowImage (window_title, img);
  cvWaitKey(0);
  cvDestroyAllWindows();
  cvReleaseImage(&img);

  return EXIT_SUCCESS;
}

