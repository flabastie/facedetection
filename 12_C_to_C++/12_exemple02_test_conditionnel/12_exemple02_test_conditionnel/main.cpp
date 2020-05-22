//
//  main.cpp
//  12_exemple02_test_conditionnel
//
//  Created by Francois LABASTIE on 22/05/2020.
//  Copyright © 2020 Francois LABASTIE. All rights reserved.
//

#include <iostream>
#include <cstdlib>
#include <cstdio>
using namespace std;

int max(int a, int b)
{
    if(a>b)
        return a;
    else
        return b;
}

int main(int argc, const char * argv[]) {
    int x, y;
    cout << "Saisir l'entier 1 " << endl;
    cin >> x;
    
    do {
        cout << "Saisir l'entier 2 " << endl;
        cin >> y;
    } while (y==x);
    
    cout << "Plus grand : " << max(x,y) << "\n";
    return 0;
}
