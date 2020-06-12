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
    
    cout << "Facedetection - Bienvenue !" << endl << endl;
    
    // Loop général - Fonction loadImage
    do {
        // Loop saisie CHEMIN de l'image à charger
        do {
            cout << "---------------------------------------" << endl;
            cout << "Saisir le CHEMIN de l'image à charger :" << endl;
            cout << "Exemple: '/Users/myname/foldername/' " << endl;
            cout << "'0' + Enter = sortie du programme" << endl;
            cout << "---------------------------------------" << endl;
            getline(std::cin,image_path);
        } while (!Saisie_Image.checkInputPath(image_path));
        
        // Loop saisie NOM et EXTENSION de l'image à charger
        do {
            cout << endl;
            cout << "----------------------------------------------" << endl;
            cout << "Saisir NOM et EXTENSION de l'image à charger :" << endl;
            cout << "(Exemple: 'image.png' )" << endl;
            cout << "'0' + Enter = sortie du programme" << endl;
            cout << "----------------------------------------------" << endl;
            getline(std::cin,image_name);
        } while (!Saisie_Image.checkInputName(image_name));
        
        // Affichage chemin complet de l'image à détecter
        cout << endl;
        cout << "----------------------------------------------" << endl;
        cout << "Image à détecter : " << endl;
        cout << Saisie_Image.GetFullPath() << endl;
        cout << "----------------------------------------------" << endl;
    
    // Fin loop général - Fonction loadImage (test image ok)
    } while (!Detection_Image.loadImage(Saisie_Image.GetFullPath()));
    
    // Fonction detectAndDisplay
    Detection_Image.detectAndDisplay();
    
    // Message de fin de prgramme
    cout << endl << "Fin du programme." << endl << endl;
    return 0;
}
