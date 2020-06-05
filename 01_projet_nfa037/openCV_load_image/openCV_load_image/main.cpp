//
//  main.cpp
//  openCV_load_image
//
//  Created by Francois LABASTIE on 24/05/2020.
//  Copyright © 2020 Francois LABASTIE. All rights reserved.
//

#include <iostream>
#include "opencv2/imgproc.hpp"
#include "opencv2/imgcodecs.hpp"
#include "opencv2/highgui.hpp"
using namespace std;
using namespace cv;

int main(int argc, const char * argv[]) {
    Mat image;

    namedWindow("Hello World", WINDOW_AUTOSIZE);
    const char* filename = argc >=2 ? argv[1] : "lena.jpg";
    
    image = imread( samples::findFile( filename ), IMREAD_COLOR );
    if (image.empty())
    {
        printf(" Error opening image\n");
        printf(" Usage:\n %s [image_name  -- default lena.jpg] \n", argv[0]);
        return EXIT_FAILURE;
    }
    else{
        imshow( "Press any key to exit !", image );
    }
    
    waitKey(0);
    destroyAllWindows();
    
    std::cout << "Hello, World!\n";
    return 0;

}


