#include <iostream>
#include <opencv2/opencv.hpp>

using namespace std;
using namespace cv;

int main(int argc, char* argv[])
{
  string file = string(argv[1]);
  Mat img = imread(fileLoc);
  imshow(file, img);
  waitKey(0);
  return 0;
}
