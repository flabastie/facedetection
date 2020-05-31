//
//  Saisie.cpp
//  facedetection_LABASTIE_Francois
//
//  Created by Francois LABASTIE on 30/05/2020.
//  Copyright © 2020 Francois LABASTIE. All rights reserved.
//

#include "Saisie.hpp"
#include <iostream>
#include <string>
#include <algorithm>
#include <cctype>
#include <locale>
using namespace std;



bool Saisie::check_input_name(string image_name)
//bool check_input(const char* input_path)
{
    // Test si saisie vide
    if(image_name.empty())
    {
        cout << "Empty" << endl;
        return false;
    }
    else{
        // Suppression espaces éventuels "avant" et "après"
        //trim(image_name);
        // Recherche espaces "intérieur"
        size_t found=image_name.find(' ');
        if (found!=std::string::npos)
        {
            // std::cout << "Space found at: " << found << '\n';
            cout << endl << "Ne pas saisir d'espace! Merci ;)" << endl << endl;
            return false;
        }
    }
    
    // Récupération d'extension de fichier
    size_t last_dot_position = image_name.find_last_of(".");
    
    // Test si "." présent dans la chaîne
    if (last_dot_position!=std::string::npos)
    {
        // Extraction chaîne après "."
        string tail = image_name.substr(last_dot_position+1);
        
        // Extensions autorisées
        string extensions[] = {"png", "jpg", "jpeg"};
        // Variable de check de présence dans la liste
        bool ext_inlist = false;
        
        // Conversion de tail en lower case
        for_each(tail.begin(), tail.end(), [](char & c){
            c = ::tolower(c);
        });
        
        // Vérification si extension saisie est autorisée
        for(int i=0; i< (sizeof(extensions)/sizeof(*extensions)); i++)
        {
            if (tail.compare(extensions[i]) == 0)
                // On modifie la variable de check de présence
                ext_inlist = true;
        }
        // Si ext_inlist inchangée
        if(!ext_inlist)
        {
            cout << endl << "Extension de fichier non autorisée !" << endl << endl;
            return false;
        }
    }
    
    // Chemin, nom et exetension acceptés
    cout << image_name << endl;
    return true;
}

// trim from start (in place)
static inline void ltrim(std::string &s) {
    s.erase(s.begin(), std::find_if(s.begin(), s.end(), [](int ch) {
        return !std::isspace(ch);
    }));
}

// trim from end (in place)
static inline void rtrim(std::string &s) {
    s.erase(std::find_if(s.rbegin(), s.rend(), [](int ch) {
        return !std::isspace(ch);
    }).base(), s.end());
}

// trim from both ends (in place)
static inline void trim(std::string &s) {
    ltrim(s);
    rtrim(s);
}
