//
//  main.cpp
//  facedetection_LABASTIE_Francois
//
//  Created by Francois LABASTIE on 30/05/2020.
//  Copyright © 2020 Francois LABASTIE. All rights reserved.
//

#include "opencv2/objdetect.hpp"
#include "opencv2/highgui.hpp"
#include "opencv2/imgproc.hpp"
#include <iostream>
#include <string>
#include <algorithm>
#include <cctype>
#include <locale>
#include <ncurses.h>
#include "Saisie.hpp"
using namespace std;
using namespace cv;

//int display_caption(const char* caption);
void detectAndDisplay(Mat frame);
CascadeClassifier face_cascade;

int main( int argc, const char** argv )
{
    string image_path;
    string image_name;
    
    // Instanciation objet saisie_image;
    Saisie Saisie_Image;
    
    // Instanciation classe CommandLineParser pour récupération fichier cascade
    CommandLineParser parser(argc, argv,"{face_cascade|haarcascade_frontalface_alt.xml|Path to face cascade.}");
    String face_cascade_name = samples::findFile( parser.get<String>("face_cascade") );
    
    //-- Chargement des cascades
    if( !face_cascade.load( face_cascade_name ) )
    {
        cout << "\n--(!)Error loading face cascade\n";
        return -1;
    };
    
    // Instanciation classe Mat - Création objet src
    Mat src;
    
    // Saisie chemin de l'image à charger
    do {
        cout << "---------------------------------------" << endl;
        cout << "Saisir le CHEMIN de l'image à charger :" << endl;
        cout << "(Exemple: /Users/myname/foldername/ )"   << endl;
        cout << "---------------------------------------" << endl;
        getline(std::cin,image_path);
    } while (!Saisie_Image.check_input_path(image_path));
    
    // Saisie nom et extension de l'image à charger
    do {
        cout << endl;
        cout << "----------------------------------------------" << endl;
        cout << "Saisir NOM et EXTENSION de l'image à charger :" << endl;
        cout << "(Exemple: image.png )" << endl;
        cout << "----------------------------------------------" << endl;
        getline(std::cin,image_name);
    } while (!Saisie_Image.check_input_name(image_name));
    
    // image à détecter
    cout << endl;
    cout << "---------------------------------------------" << endl;
    cout << "Image à détecter : " << endl;
    cout << Saisie_Image.GetFullPath() << endl;
    cout << "---------------------------------------------" << endl;
    const char* filename = Saisie_Image.GetFullPath().c_str();
    
    // Chargement image dans objet src
    src = imread( samples::findFile(filename), IMREAD_COLOR );
    // Test échec chargement => Stop programme
    if (src.empty())
    {
        cout << " Error opening image\n";
        return EXIT_FAILURE;
    }
    
    //-- 3. Apply the classifier to the frame
    detectAndDisplay( src );
    waitKey(0);
    
    return 0;
}

void detectAndDisplay( Mat frame )
{
    Mat frame_gray;
    cvtColor( frame, frame_gray, COLOR_BGR2GRAY );
    equalizeHist( frame_gray, frame_gray );
    //-- Detect faces
    std::vector<Rect> faces;
    face_cascade.detectMultiScale( frame_gray, faces );
    
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
}


