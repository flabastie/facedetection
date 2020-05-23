//
//  main.cpp
//  13_exemple01_classe_point
//
//  Created by Francois LABASTIE on 23/05/2020.
//  Copyright © 2020 Francois LABASTIE. All rights reserved.
//

#include <cstdio>
#include <cstdlib>
#include <iostream>
using namespace std;

class Point {
    // Variables d'instance
    int x;
    int y;
    int z;
    
    // méthodes
    public : void Saisie () {
        cout << "Saisir l'abscisse du point ";
        cin >> this->x;
        cout << "Saisir l'ordonnee du point ";
        cin >> this->y;
        cout << "Saisir la cote du point ";
        cin >> this->z;
    }
    
    public : void Affiche () {
        cout <<"Abscisse : " << this->x << "\n";
        cout <<"Ordonnee : " << this->y << "\n";
        cout <<"Cote : " << this->z << "\n";
    }
    
}; // fin classe point

int main() {
    // Déclaration d'instance de la classe
    Point Omega;
    
    // appel des méthodes
    Omega.Saisie();
    Omega.Affiche();
    
    return 0;
}
