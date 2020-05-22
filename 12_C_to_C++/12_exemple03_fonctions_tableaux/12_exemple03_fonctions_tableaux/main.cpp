//
//  main.cpp
//  12_exemple03_fonctions_tableaux
//
//  Created by Francois LABASTIE on 22/05/2020.
//  Copyright © 2020 Francois LABASTIE. All rights reserved.
//

#include <iostream>
#include <cstdlib>
#include <cstdio>
#include <vector>
using namespace std;

int PlusGrand(vector<int> Tab)
{
    int Max = Tab[0];
    if(Tab.size() == 0)
    {
        cout << "Tableau vide " << endl;
        return -1;
    }
    
    for(int i=0; i<Tab.size(); i++)
        if(Tab[i] > Max)
            Max = Tab[i];
    return Max;
}

vector<int> Saisie(int nb)
{
    vector<int> T(nb,0);
    
    for(int i=0; i<nb; i++)
    {
        cout << "Saisir un entier : ";
        cin >> T[i];
    }
    return T;
}

int main(int argc, const char * argv[]) {
    int nb;
    cout << "Nombre d'entiers dans le tableau ? ";
    cin >> nb;
    
    vector<int> T(nb,0);
    T=Saisie(nb);
    cout << "Valeur la plus grande : " << PlusGrand(T) << endl;
    
    return 0;
}
