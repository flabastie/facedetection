//
//  main.cpp
//  13_exemple03_getters_setters
//
//  Created by Francois LABASTIE on 23/05/2020.
//  Copyright © 2020 Francois LABASTIE. All rights reserved.
//

#include <iostream>
using namespace std;

class Entreprise {
    private: int CA;
    
    public:
    
    // Setter Set_CA
    void Set_CA(int New_CA) {
        CA = New_CA;
    }
    // Getter Get_CA
    int Get_CA() {
        return CA;
    }
    
}; // fin de classe

int main() {
    Entreprise Ma_Boite;
    Ma_Boite.Set_CA(1000000);
    cout << "Le chiffre d'affaire en euros est de : " << Ma_Boite.Get_CA() << endl;
    return 0;
}
