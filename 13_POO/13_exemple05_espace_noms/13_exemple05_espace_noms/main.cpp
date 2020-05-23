//
//  main.cpp
//  13_exemple05_espace_noms
//
//  Created by Francois LABASTIE on 23/05/2020.
//  Copyright © 2020 Francois LABASTIE. All rights reserved.
//

#include <iostream>
using namespace std;

// définition d'une variable globale
int Var1 = 1;

// définition d'un espace de noms
namespace Espace1 {
    // définition de deux variables dans l'espace de noms
    int Var1 = 2;
    int Var2;
}

int main(){
    // Définition d'une variable dans le main()
    int Var2 = 4;
    
    // affectation de valeur à la variable V2 de l'espace de nom
    Espace1::Var2 = 3;
    
    cout << "Var1 Globale : " << Var1 << endl;
    cout << "Var1 de l'espace de noms : " << Espace1::Var1 << endl;
    
    cout<<"Var2 de l'espace de noms : " << Espace1::Var2 << endl;
    cout<<"Var2 du main() : " << Var2 << endl;
    
    return 0;
}
