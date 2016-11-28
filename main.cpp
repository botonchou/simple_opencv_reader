#include <iostream>
#include <opencv2/core/core.hpp>
#include <opencv2/highgui/highgui.hpp>
using namespace cv;
using namespace std;

int main(int argc, char* argv[]) {

  if( argc != 2) {
    cout << "Usage: display_image ImageToLoadAndDisplay" << endl;
    return -1;
  }

  Mat image = imread(argv[1], IMREAD_UNCHANGED);

  printf("Size of mask = (%d, %d, %d)\n", image.rows, image.cols, image.channels());

  // Check for invalid input
  if (!image.data) {
    cout << "Could not open or find the image" << std::endl;
    return -1;
  }

  namedWindow( "Display window", WINDOW_AUTOSIZE );
  imshow( "Display window", image);

  waitKey(0);
  return 0;
}
