//
//  main.cpp
//  12_exo05_double_for2
//
//  Created by Francois LABASTIE on 22/05/2020.
//  Copyright © 2020 Francois LABASTIE. All rights reserved.
//

#include <iostream>
#include <cstdlib>
#include <cstdio>
using namespace std;


int main(int argc, const char * argv[]) {
    int a, i, j;
    cout << "Entrer un nombre entier : ";
    cin >> a;
    
    for(i=1; i<=a; i++)
    {
        for(j=1; j<=a; j++)
        {
            cout <<  i << " " << j << endl;
        }
    }
    return 0;
}
