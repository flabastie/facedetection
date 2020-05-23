//
//  main.cpp
//  12_exo10_tableau_dynamique
//
//  Created by Francois LABASTIE on 23/05/2020.
//  Copyright © 2020 Francois LABASTIE. All rights reserved.
//

#include <iostream>
#include <cstdlib>
#include <cstdio>
using namespace std;

int main(int argc, const char * argv[]) {
    int taille, i;
    
    cout << "Saisissez le nombre de cases du tableau : ";
    cin >> taille;
    
    // allocation dynamique de mémoire
    float * Tab = new float[taille];
    
    // saisie
    for(i=0; i<taille; i++)
    {
        cout << "Saisissez la valeur : " << (i+1) << "\t";
        cin >> Tab[i];
    }
    
    // affichage
    cout << "\n";
    for(i=0; i<taille; i++)
        cout << "Valeur : " << (i+1) << ":" << Tab[i] << endl;
    // libération de mémoire
    delete [] Tab;
    
    // nouvel affichage
    cout << "\n";
    for(i=0; i<taille; i++)
        cout << "Valeur: " << (i+1) << ":" << Tab[i] << endl;
    
    return 0;
}
