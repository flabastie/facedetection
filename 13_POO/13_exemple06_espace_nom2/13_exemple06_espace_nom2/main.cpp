//
//  main.cpp
//  13_exemple06_espace_nom2
//
//  Created by Francois LABASTIE on 23/05/2020.
//  Copyright © 2020 Francois LABASTIE. All rights reserved.
//

#include <iostream>
using namespace std;

namespace Espace1 {
    int Var = 10;
    
    void F_Espace () {
        cout<<"Fonction de l'Espace1" << endl;
    }
}

namespace Espace2 {
    int Var = 20;
    
    void F_Espace () {
        cout<<"Fonction de l'Espace2" << endl;
    }
}

int main(){
    cout << "Var de l'Espace1 : " << Espace1::Var << endl;
    Espace1::F_Espace();
    cout << endl;
    
    cout << "Var de l'Espace2 : " << Espace2::Var << endl;
    Espace2::F_Espace();
    cout << endl;
    
    return 0;
}
