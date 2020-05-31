//
//  Detection.hpp
//  facedetection_LABASTIE_Francois
//
//  Created by Francois LABASTIE on 31/05/2020.
//  Copyright © 2020 Francois LABASTIE. All rights reserved.
//

#ifndef Detection_hpp
#define Detection_hpp

#include <stdio.h>
#include "opencv2/objdetect.hpp"
#include "opencv2/highgui.hpp"
#include "opencv2/imgproc.hpp"
#include <iostream>
#include <string>

#endif /* Detection_hpp */

using namespace std;
using namespace cv;

class Detection
{
    public:

        // Constructeur
        Detection();
    
        // Function detectAndDisplay
        void detectAndDisplay(string full_path);
    
    private:
    
        const string cascadeName = "haarcascade_frontalface_alt.xml";
        String face_cascade_name;
        string filename;
        CascadeClassifier face_cascade;
};
