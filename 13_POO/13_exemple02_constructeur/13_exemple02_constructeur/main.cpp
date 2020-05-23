//
//  main.cpp
//  13_exemple02_constructeur
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
    
    // constructeurs
    public : Point () {
        this->x = 3;
        this->y = 2;
        this->z = 1;
    }
    
    public : Point (int a, int b , int c) {
        this->x = a;
        this->y = b;
        this->z = c;
    }
    
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
        cout << "Abscisse : " << this->x << "\n";
        cout << "Ordonnee : " << this->y << "\n";
        cout << "Cote : " << this->z << "\n\n";
    }
    
}; // fin classe point

int main() {
    // Déclaration d'instance de la classe sans paramètres
    Point Omega;
    //Déclaration d'une instance de la classe avec le constructeur surchargé
    Point Omegabis (10,20,30);
    
    // appel des méthodes
    cout << "Omega : \n";
    Omega.Affiche();
    cout << "Omegabis : \n";
    Omegabis.Affiche();
    
    return 0;
}
