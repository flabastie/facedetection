//
//  main.cpp
//  12_exo07_tableau
//
//  Created by Francois LABASTIE on 22/05/2020.
//  Copyright © 2020 Francois LABASTIE. All rights reserved.
//

#include <iostream>
#include <cstdlib>
#include <cstdio>
using namespace std;


int main(int argc, const char * argv[]) {
    int a;
    float T[5];
    float max;
    
    for(a=0; a<5; a++)
    {
        cout << "Saisir un réel: ";
        cin >> T[a];
    }
    
    // affichage
    for(a=0; a<5; a++)
        cout << T[a] << endl;
    
    max = T[0];
    
    for(a=0; a<5; a++)
    {
        if(T[a]>max)
            max = T[a];
    }
    cout << "Le plus grand élément est " << max << endl;
    return 0;
}
