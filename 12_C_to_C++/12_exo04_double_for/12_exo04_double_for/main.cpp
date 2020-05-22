//
//  main.cpp
//  12_exo04_double_for
//
//  Created by Francois LABASTIE on 22/05/2020.
//  Copyright © 2020 Francois LABASTIE. All rights reserved.
//

#include <iostream>
#include <cstdlib>
#include <cstdio>
using namespace std;


int main(int argc, const char * argv[]) {
    int nb, i, j;
    cout << "Entrer un nombre entier : ";
    cin >> nb;
    
    cout << "*" << endl;
    for(i=1; i<nb; i++)
    {
        for(j=1; j<=i; j++)
        {
            cout << " ";
        }
        cout << "*" << endl;
    }
    return 0;
}
