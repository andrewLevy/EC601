// EC 601 HW 1 by Yue Sun (U96951208) and Andrew Levy (U78294109)
// The purpose of the below OpenCV program is to blur an input image.  The program uses two OpenCV libraries: 
// (i) improc.hpp
// (ii) highgui.hpp

#include "opencv2/imgproc/imgproc.hpp"
#include "opencv2/highgui/highgui.hpp"

using namespace std;
using namespace cv;

Mat src; Mat dst;
char window_name1[] = "Unprocessed Image";
char window_name2[] = "Processed Image";

int main( int argc, char** argv )
{
    /// Load the source image
    src = imread( argv[1], 1 );
    
    namedWindow( window_name1, WINDOW_AUTOSIZE );
    imshow("Unprocessed Image",src);
    
    dst = src.clone();
    GaussianBlur( src, dst, Size( 15, 15 ), 1, 1 );
    
    namedWindow( window_name2, WINDOW_AUTOSIZE );
    imshow("Processed Image",dst);
    
    waitKey();
    return 0;
}
