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
    
//        // Getter image_name
//        string GetImageName();
//
//        // Getter image_path
//        string GetImagePath();
    
        // Getter full_path
        string GetFullPath();
    
        // Fonction check_input_name
        bool check_input_name(string image_name);
    
        // Fonction check_input_path
        bool check_input_path(string image_path);
    
    private:
    
//        string image_name;
//        string image_path;
        string full_path;
        const string WHITESPACE = " \n\r\t\f\v";
        
        string ltrim(const string& s);
        string rtrim(const string& s);
        string trim(string& s);
        bool has_ending(std::string const &fullString, std::string const &ending);

};


