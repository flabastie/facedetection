//
//  Detection.cpp
//  facedetection_LABASTIE_Francois
//
//  Created by Francois LABASTIE on 31/05/2020.
//  Copyright © 2020 Francois LABASTIE. All rights reserved.
//

#include "Detection.hpp"

Detection::Detection()
{
    this->face_cascade_name = samples::findFile(this->cascadeName);
    
    //-- Chargement des cascades
    if(!face_cascade.load(this->face_cascade_name))
    {
        cout << "\n--(!)Error loading face cascade\n";
        EXIT_FAILURE;
    }
}

/**
 * Function detectAndDisplay
 */

void Detection::detectAndDisplay(string full_path)
{
    Mat frame = imread( samples::findFile(full_path), IMREAD_COLOR );
    
    // Test échec chargement => Stop programme
    if (frame.empty())
    {
        cout << endl << "Error opening image" << endl;
        EXIT_FAILURE;
    }

    Mat frame_gray;
    cvtColor( frame, frame_gray, COLOR_BGR2GRAY );
    equalizeHist( frame_gray, frame_gray );

    //-- Detect faces
    std::vector<Rect> faces;
    this->face_cascade.detectMultiScale( frame_gray, faces );

    // nbr visages
    long nb_faces = faces.size();
    cout << "Nbr de visages détectés = " << nb_faces << endl << endl;

    for ( size_t i = 0; i < faces.size(); i++ )
    {
        rectangle(frame,
                  Point(faces[i].x, faces[i].y),
                  Point(faces[i].x + faces[i].width, faces[i].y + faces[i].height),
                  Scalar(0, 0, 255), 2);
        Mat faceROI = frame_gray( faces[i] );
    }

    // message
    rectangle(frame,
              Point(0, frame.rows-50),
              Point(frame.cols, frame.rows),
              Scalar(0, 0, 0), -1);
    string message = "Faces detected : " + std::to_string(nb_faces);
    putText(frame,
            message,
            Point(20, frame.rows-18),
            FONT_HERSHEY_COMPLEX, 1, Scalar(255, 255, 255), 2 );

    //-- Show what you got
    imshow( "Détection de visages", frame );
    
    // pause
    waitKey(0);
}
