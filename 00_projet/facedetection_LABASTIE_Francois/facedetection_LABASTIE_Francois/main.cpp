//
//  main.cpp
//  facedetection_LABASTIE_Francois
//
//  Created by Francois LABASTIE on 30/05/2020.
//  Copyright © 2020 Francois LABASTIE. All rights reserved.
//

#include <iostream>
#include <string>
#include "Saisie.hpp"
#include "Detection.hpp"
using namespace std;
using namespace cv;

/**
 * Function main
 */

int main( int argc, const char** argv )
{
    // Saisie utilisateur
    string image_path;
    string image_name;
    
    // Instanciation objet Saisie_Image
    Saisie Saisie_Image;
    
    // Instanciation objet Detection_Image
    Detection Detection_Image;
    
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
    
    // Image à détecter
    cout << endl;
    cout << "---------------------------------------------" << endl;
    cout << "Image à détecter : " << endl;
    cout << Saisie_Image.GetFullPath() << endl;
    cout << "---------------------------------------------" << endl;
    
    // Fonction detectAndDisplay
    Detection_Image.detectAndDisplay(Saisie_Image.GetFullPath());
    
    return 0;
}
