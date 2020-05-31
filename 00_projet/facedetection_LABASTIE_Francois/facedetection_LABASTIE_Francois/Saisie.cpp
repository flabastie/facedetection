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
        image_name = this->trim(image_name);
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

string Saisie::ltrim(const string& s)
{
    // Recherche début de string (non WHITESPACE)
    size_t start = s.find_first_not_of(this->WHITESPACE);
    // Elimination de WHITESPACE de début
    return (start == std::string::npos) ? "" : s.substr(start);
}

string Saisie::rtrim(const string& s)
{
    // Recherche fin de string (non WHITESPACE)
    size_t end = s.find_last_not_of(this->WHITESPACE);
    // Elimination de WHITESPACE de fin
    return (end == std::string::npos) ? "" : s.substr(0, end + 1);
}

string Saisie::trim(const string& s)
{
    cout << "Trim function used !" << endl;
    return this->rtrim(this->ltrim(s));
}


