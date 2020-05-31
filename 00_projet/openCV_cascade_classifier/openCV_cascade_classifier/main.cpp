//
//  main.cpp
//  openCV_cascade_classifier
//
//  Created by Francois LABASTIE on 24/05/2020.
//  Copyright © 2020 Francois LABASTIE. All rights reserved.
//

#include "opencv2/objdetect.hpp"
#include "opencv2/highgui.hpp"
#include "opencv2/imgproc.hpp"
#include "opencv2/videoio.hpp"
#include <iostream>
#include <string>
using namespace std;
using namespace cv;

// image à détecter
const string IMAGE = "/Users/francois/Desktop/NFA037/group3.png";

int display_caption( const char* caption );
void detectAndDisplay( Mat frame );
CascadeClassifier face_cascade;
CascadeClassifier eyes_cascade;

int main( int argc, const char** argv )
{
    CommandLineParser parser(argc, argv,
                             "{help h||}"
                             "{face_cascade|haarcascade_frontalface_alt.xml|Path to face cascade.}"
                             "{eyes_cascade|haarcascade_eye_tree_eyeglasses.xml|Path to eyes cascade.}"
                             "{camera|0|Camera device number.}");
    parser.about( "\nThis program demonstrates using the cv::CascadeClassifier class to detect objects (Face + eyes) in a video stream.\n"
                 "You can use Haar or LBP features.\n\n" );
    // parser.printMessage();
    String face_cascade_name = samples::findFile( parser.get<String>("face_cascade") );
    String eyes_cascade_name = samples::findFile( parser.get<String>("eyes_cascade") );
    
    //-- 1. Load the cascades
    if( !face_cascade.load( face_cascade_name ) )
    {
        cout << "\n--(!)Error loading face cascade\n";
        return -1;
    };
    if( !eyes_cascade.load( eyes_cascade_name ) )
    {
        cout << "\n--(!)Error loading eyes cascade\n";
        return -1;
    };
    
    Mat src;
    // namedWindow("Hello World", WINDOW_AUTOSIZE);
    const char* filename = argc >=2 ? argv[1] : IMAGE.c_str();
    
    src = imread( samples::findFile( filename ), IMREAD_COLOR );
    if (src.empty())
    {
        printf(" Error opening image\n");
        printf(" Usage:\n %s [image_name  -- default lena.jpg] \n", argv[0]);
        return EXIT_FAILURE;
    }
    

    if( src.empty() )
    {
        cout << "--(!) No captured frame -- Break!\n";
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
    cout << "Nbr de visages détectés = " << nb_faces << endl;
    
    // rectangle(frame, Point(50, 50), Point(200, 200), Scalar(0, 255, 0));
    
    for ( size_t i = 0; i < faces.size(); i++ )
    {
        rectangle(frame, Point(faces[i].x, faces[i].y), Point(faces[i].x + faces[i].width, faces[i].y + faces[i].height), Scalar(0, 0, 255), 2);
        Mat faceROI = frame_gray( faces[i] );
    }
    
    // message
    rectangle(frame, Point(0, frame.rows-50), Point(frame.cols, frame.rows), Scalar(0, 0, 0), -1);
    string message = "Faces detected : " + std::to_string(nb_faces);
    putText( frame, message,
            Point(20, frame.rows-18),
            FONT_HERSHEY_COMPLEX, 1, Scalar(255, 255, 255), 2 );
    
    //-- Show what you got
    imshow( "Détection de visages", frame );
}
