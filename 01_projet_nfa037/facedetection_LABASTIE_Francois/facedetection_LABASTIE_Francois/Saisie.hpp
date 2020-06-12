//
//  Saisie.hpp
//  facedetection_LABASTIE_Francois
//
//  Created by Francois LABASTIE on 30/05/2020.
//  Copyright © 2020 Francois LABASTIE. All rights reserved.
//

#ifndef Saisie_hpp
#define Saisie_hpp
#include <stdio.h>
#include <iostream>
#include <string>
#include <algorithm>
#endif /* Saisie_hpp */

using namespace std;

class Saisie{
    
    public:
    
        // Getter full_path
        string GetFullPath();
        // Fonction checkInputName
        bool checkInputName(string image_name);
        // Fonction checkInputPath
        bool checkInputPath(string image_path);
    
    private:
    
        // Variable et constante
        string full_path;
        const string WHITESPACE = " \n\r\t\f\v";
    
        // Fonction ltrim (supprime espaces "avant" la chaîne)
        string ltrim(const string& s);
        // Fonction rtrim (supprime espaces "après" la chaîne)
        string rtrim(const string& s);
        // Fonction trim (supprime espaces "avant" et "après")
        string trim(string& s);
        // Fonction slashBackslash (détecte si slash ou antislash présent)
        int slashBackslash(string& s);
        // Fonction has_ending (détecte si slash ou antislash en fin de chaîne)
        bool hasEnding(string const &fullString, string const &ending);
    
};


