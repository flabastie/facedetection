//
//  main.cpp
//  12_exo14_liste_chainee
//
//  Created by Francois LABASTIE on 23/05/2020.
//  Copyright © 2020 Francois LABASTIE. All rights reserved.
//

#include <iostream>
#include <cstdio>
#include <cstdlib>
using namespace std;

typedef struct Maillon Maillon;
struct Maillon {
    int valeur;
    Maillon * suivant;
};

int main(int argc, const char * argv[]) {
    int i=0;
    Maillon * maListe;
    Maillon * maListebis;
    Maillon * element = new (Maillon);
    
    // création 1er maillon
    element->valeur = 10;
    element->suivant = NULL;
    
    maListe = element;
    
    // duplication de la liste
    maListebis = maListe;
    
    for(i=9; i>=0; i--)
    {
        // création nouveau maillon
        Maillon * element = new (Maillon);
        element->valeur = i;
        element->suivant = NULL;
        
        // parcours de la liste
        while(maListebis->suivant != NULL)
        {
            maListebis = maListebis->suivant;
        }
        // branchement maillon en fin de liste
        maListebis->suivant = element;
        
        // remontée de maListebis en tête de liste
        maListebis = maListe;
    }
    
    // affichage de la liste
    while(maListebis != NULL)
    {
        cout << maListebis->valeur << " - ";
        maListebis = maListebis->suivant;
    }
    cout << "NULL\n";
    
    return 0;
}
