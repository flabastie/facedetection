//
//  main.cpp
//  12_exo11_pointeurs
//
//  Created by Francois LABASTIE on 23/05/2020.
//  Copyright © 2020 Francois LABASTIE. All rights reserved.
//

#include <iostream>
using namespace std;

void Permut(double * VAR1, double * VAR2)
{
    double tampon;
    tampon = *VAR1;
    *VAR1 = *VAR2;
    *VAR2 = tampon;
}

int main(int argc, const char * argv[]) {
    double A,B;
    cout << "Valeur de a ? ";
    cin >> A;
    cout << "Valeur de b ? ";
    cin >> B;
    Permut(&A,&B);
    cout << "A vaut : " << A << endl;
    cout << "B vaut : " << B << endl;
    
    return 0;
}
