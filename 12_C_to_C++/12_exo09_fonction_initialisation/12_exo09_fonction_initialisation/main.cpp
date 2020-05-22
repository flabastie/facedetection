//
//  main.cpp
//  12_exo09_fonction_initialisation
//
//  Created by Francois LABASTIE on 22/05/2020.
//  Copyright © 2020 Francois LABASTIE. All rights reserved.
//

#include <iostream>
#include <cstdlib>
#include <cstdio>
using namespace std;

void Initialisation(int Tab[], int n)
{
    int i;
    for(i=0; i<n; i++)
        Tab[i] = 100-i;
}

void Affichage(int Tab[], int taille)
{
    int i;
    for(i=0; i<taille; i++)
        cout << Tab[i] << "\t";
    cout << "\n";
}

int main(int argc, const char * argv[]) {
    int T[5];
    Initialisation(T,5);
    Affichage(T,5);
    return 0;
}
