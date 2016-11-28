#include <iostream>
#include <opencv2/core/core.hpp>
#include <opencv2/highgui/highgui.hpp>
using namespace cv;
using namespace std;

int main() {

  Mat image = imread("example_mask.png", IMREAD_UNCHANGED);

  printf("mask is of size (%d, %d, %d)\n", image.rows, image.cols, image.channels());

  // Check for invalid input
  if(!image.data) {
    cout << "Could not open or find the image" << std::endl;
    return -1;
  }

  namedWindow( "Display window", WINDOW_AUTOSIZE );
  imshow( "Display window", image);

  waitKey(0);
  return 0;
}
