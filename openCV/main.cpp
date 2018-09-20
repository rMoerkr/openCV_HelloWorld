#include "opencv2/opencv.hpp"
#include <iostream>

using namespace std;
using namespace cv;

int main(int argc, char** argv)
{
	cout << "Using OpenCV version " << CV_VERSION << "\n" << endl;

	cout << getBuildInformation();

	system("pause");
	return 0;
}