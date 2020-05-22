//
//  main.cpp
//  12_exo02_plus_grand
//
//  Created by Francois LABASTIE on 22/05/2020.
//  Copyright © 2020 Francois LABASTIE. All rights reserved.
//

#include <iostream>
#include <cstdlib>
#include <cstdio>
using namespace std;


int main(int argc, const char * argv[]) {
    int a, b;
    
    cout << "Saisir l'entier a : " << endl;
    cin >> a;
    cout << "Saisir l'entier b : " << endl;
    cin >> b;
    if(a==b)
        cout << "Les deux nombres sont égaux \n";
    else if (a>b)
    {
        cout << "Le nombre " << a << " est plus grand que le nombre " << b << endl;
    }
    else
    {
        cout << "Le nombre " << b << " est plus grand que le nombre " << a << endl;
    }
    return 0;
}


