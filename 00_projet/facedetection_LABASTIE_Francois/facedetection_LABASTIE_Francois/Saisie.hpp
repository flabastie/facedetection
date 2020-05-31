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
#include <cctype>
#include <locale>

#endif /* Saisie_hpp */

using namespace std;

class Saisie{
    
    string image_name;
    string image_path;
    const string WHITESPACE = " \n\r\t\f\v";

    public:
    
        // Getter image_name
        string GetImageName();
    
        // Getter image_path
        string GetImagePath();
    
        string ltrim(const string& s);
    
        string rtrim(const string& s);
    
        string trim(const string& s);

        // Fonction check_input_name
        bool check_input_name(string image_name);

};


