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
    
        // Function loadImage
        bool loadImage(string full_path);
    
        // Function detectAndDisplay
        void detectAndDisplay();
    
    private:
    
        // Constante fichier cascade
        const string cascadeName = "haarcascade_frontalface_alt.xml";
        // Variables private
        String face_cascade_name;
        string filename;
        // Objets openCV
        CascadeClassifier face_cascade;
        Mat frame;
};
