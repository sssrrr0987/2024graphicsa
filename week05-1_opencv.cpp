///開空白檔案並取成week05-1_opencv.cpp
#include <opencv/highgui.h>
int main()
{///Intel performance library
    IplImage * img = cvLoadImage("c:/image.png");
    cvShowImage("week05", img);
    ///cvR
    cvWaitKey(0);
}
