//
//  main.cpp
//  13_exemple04_fichiers_separes
//
//  Created by Francois LABASTIE on 23/05/2020.
//  Copyright © 2020 Francois LABASTIE. All rights reserved.
//

#include <iostream>
#include "Nombre.h"
using namespace std;

int main() {
    // Création de l'objet Nb et envoi de 44 au constructeur
    Nombre Nb(44);
    
    // Récupération et affichage de la valeur de Nb grâce au getter
    cout << Nb.GetNombre() << endl;
    return 0;
}
