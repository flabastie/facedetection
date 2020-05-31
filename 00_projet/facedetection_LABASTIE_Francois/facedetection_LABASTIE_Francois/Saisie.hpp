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

    public:
    
        // Getter image_name
        string GetImageName();
    
        // Getter image_path
        string GetImagePath();
    
        // Fonction trim from start
        static inline void ltrim(std::string &s);

        // Fonction trim from end
        static inline void rtrim(std::string &s);

        // Fonction trim from both ends
        static inline void trim(std::string &s);

        // Fonction check_input_name
        bool check_input_name(string image_name);

};


