//
//  main.cpp
//  12_exo01_facto_recursive
//
//  Created by Francois LABASTIE on 22/05/2020.
//  Copyright © 2020 Francois LABASTIE. All rights reserved.
//

#include <iostream>
#include <cstdlib>
#include <cstdio>
using namespace std;

int Facto(int);

int main(int argc, const char * argv[]) {
    int x;
    cout << "Saisir un entier x " << endl;
    cin >> x;
    cout << "Résultat factorielle : " << Facto(x) << endl;
    return 0;
}

int Facto(int n)
{
    if(n>1)
        return(n * Facto(n-1));
    else
        return 1;
}
