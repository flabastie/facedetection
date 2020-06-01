//
//  Detection.cpp
//  facedetection_LABASTIE_Francois
//
//  Created by Francois LABASTIE on 31/05/2020.
//  Copyright © 2020 Francois LABASTIE. All rights reserved.
//

#include "Detection.hpp"

/**
 * Constructor Detection
 */

Detection::Detection()
{
    // Chargement fichier cascade
    this->face_cascade_name = samples::findFile(this->cascadeName);
    
    // Chargement des cascades
    if(!face_cascade.load(this->face_cascade_name))
    {
        // Message erreur & exit programme
        cout << "\n--(!)Error loading face cascade\n";
        EXIT_FAILURE;
    }
}

/**
 * Function loadImage
 */

bool Detection::loadImage(string full_path)
{
    try
    {
        // Chargement image
        this->frame = imread( samples::findFile(full_path), IMREAD_COLOR );
    }
    catch( cv::Exception& e )
    {
        // Récupération exception
        const char* err_msg = e.what();
        // Message exception
        cout << endl << "exception caught: " << err_msg << endl;
    }
    
    // Vérification chargement image
    if (this->frame.empty())
    {
        cout << "Image non trouvée !" << endl << endl;
        return 0;
    }
    return 1;
}

/**
 * Function detectAndDisplay
 */

void Detection::detectAndDisplay()
{
    // Test échec chargement => Stop programme
    if (this->frame.empty())
    {
        cout << endl << "Error opening image" << endl;
        EXIT_FAILURE;
    }

    // Objet Mat
    Mat frame_gray;
    cvtColor( this->frame, frame_gray, COLOR_BGR2GRAY );
    equalizeHist( frame_gray, frame_gray );

    // Faces Detection
    std::vector<Rect> faces;
    this->face_cascade.detectMultiScale( frame_gray, faces );

    // Nbr de visages
    long nb_faces = faces.size();
    // Message console - Nombre de visages détectés
    cout << "Nbr de visages détectés = " << nb_faces << endl << endl;

    // Création rectangles
    for ( size_t i = 0; i < faces.size(); i++ )
    {
        rectangle(frame,
                  Point(faces[i].x, faces[i].y),
                  Point(faces[i].x + faces[i].width, faces[i].y + faces[i].height),
                  Scalar(0, 0, 255), 2);
        Mat faceROI = frame_gray( faces[i] );
    }

    // Message sur image - Fond noir bandeau
    rectangle(frame,
              Point(0, frame.rows-50),
              Point(frame.cols, frame.rows),
              Scalar(0, 0, 0), -1);
    
    // Message sur image - Nombre de visages détectés
    string message = "Faces detected : " + std::to_string(nb_faces);
    putText(frame,
            message,
            Point(20, frame.rows-18),
            FONT_HERSHEY_COMPLEX, 1, Scalar(255, 255, 255), 2 );

    // Affichage image
    imshow( "Détection de visages", frame );
    
    // Pause (clic souris sur image + touche clavier = exit)
    waitKey(0);
}
