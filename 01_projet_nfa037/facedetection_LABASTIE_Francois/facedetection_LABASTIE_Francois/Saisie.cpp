//
//  Saisie.cpp
//  facedetection_LABASTIE_Francois
//
//  Created by Francois LABASTIE on 30/05/2020.
//  Copyright © 2020 Francois LABASTIE. All rights reserved.
//

#include "Saisie.hpp"

/**
 * Getter GetFullPath
 */
string Saisie::GetFullPath()
{
    return this->full_path;
}

/**
 * Function check_input_path
 */
bool Saisie::check_input_path(string image_path)
{
    // Test si saisie vide
    if(image_path.empty())
    {
        cout << "Chaîne saisie vide !" << endl;
        return false;
    }
    // Si saisie non-vide
    else{
        // Suppression espaces éventuels "avant" et "après"
        image_path = this->trim(image_path);
        
        // Fin de programme demandé par utilisateur
        if (image_path.compare("0") == 0)
        {
            cout << endl << "Fin du programme." << endl << endl;
            exit(EXIT_SUCCESS);
        }
        
        // Recherche espaces "intérieur"
        size_t found=image_path.find(' ');
        if (found!=std::string::npos)
        {
            // Message pour utilisateur et return false
            cout << endl << "Ne pas saisir d'espace! Merci ;)" << endl << endl;
            return false;
        }
    }
    
    // Test si slash présent dans chaîne et absent à la fin
    if(this->slash_or_backslash(image_path)==1 && !this->has_ending(image_path, "/"))
    {
        // Ajout de slash en fin de chaîne
        image_path = image_path + "/";
    }
    // Test si antislash présent dans chaîne et absent à la fin
    else if(this->slash_or_backslash(image_path)==2 && !this->has_ending(image_path, "\\"))
    {
        // Ajout de antislash en fin de chaîne
        image_path = image_path + "\\";
    }
    // Test si aucun slash ou antislash présent dans chaîne
    else if(this->slash_or_backslash(image_path)==0)
    {
        // Ajout de slash en fin de chaîne
        image_path = image_path + "/";
    }
    
    // Chemin accepté et return true
    this->full_path.assign(image_path);
    return true;
}

/**
 * Function hasEnding
 */
bool Saisie::has_ending (std::string const &fullString, std::string const &ending) {
    // Test si chaîne à tester > chaîne à rechercher
    if (fullString.length() >= ending.length()) {
        // Retourne 1 (true) si final de chaîne à tester égale à chaîne à rechercher
        return (0 == fullString.compare (fullString.length() - ending.length(), ending.length(), ending));
    } else {
        return false;
    }
}

/**
 * Function slash_or_backslash
 * return 1 => slash, 2 => antislash, 0 => aucun
 */
int Saisie::slash_or_backslash(string& s)
{
    // Recherche slash
    size_t found_slash=s.find('/');
    if (found_slash!=std::string::npos)
    {
        // Renvoie 1 si slash trouvé
        return 1;
    }
    
    // Recherche antislash
    size_t found_backslash=s.find('\\');
    if (found_backslash!=std::string::npos)
    {
        // Renvoie 2 si slash trouvé
        return 2;
    }
    
    // Renvoie 0 si aucun trouvé
    return 0;
}

/**
 * Function check_input_name
 */
bool Saisie::check_input_name(string image_name)
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
        
        // Fin de programme demandé par utilisateur
        if (image_name.compare("0") == 0)
        {
            cout << endl << "Fin du programme." << endl << endl;
            exit(EXIT_SUCCESS);
        }
        
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
    // Si "." non trouvé
    else
    {
        cout << "Extension de fichier non trouvée !" << endl << endl;
        return false;
    }
    
    // Chemin, nom et extension acceptés
    // Concaténation de chaînes et update full_path
    this->full_path += image_name;

    return true;
}

/**
 * Function ltrim
 */
string Saisie::ltrim(const string& s)
{
    // Recherche début de string (non WHITESPACE)
    size_t start = s.find_first_not_of(this->WHITESPACE);
    // Elimination de WHITESPACE de début
    return (start == string::npos) ? "" : s.substr(start);
}

/**
 * Function rtrim
 */
string Saisie::rtrim(const string& s)
{
    // Recherche fin de string (non WHITESPACE)
    size_t end = s.find_last_not_of(this->WHITESPACE);
    // Elimination de WHITESPACE de fin
    return (end == string::npos) ? "" : s.substr(0, end + 1);
}

/**
 * Function trim
 */
string Saisie::trim(string& s)
{    
    return this->rtrim(this->ltrim(s));
}


