//
//  main.cpp
//  12_exo06_dessin_t
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
    cout << "Saisissez un nombre entier supérieur ou égal à 3 : ";
    cin >> nb;
    
    // cas des nombres impairs
    if(nb%2 != 0)
    {
        // branche horizontale
        for(i=1; i<=nb; i++)
            cout << "*";
        
        cout << "\n";
        
        // branche verticale
        for(i=1; i<=nb-1; i++)
        {
            for(j=1; j<=((nb+1)/2)-1; j++)
                cout << " ";
            
            cout << "*\n";
        }
    }
    
    // cas des nombres pairs
    else{
        // branche horizontale
        for(i=1; i<nb; i++)
            cout << "*";
        
        cout << "\n";
        
        // branche verticale
        for(i=1; i<=nb-1; i++)
        {
            for(j=1; j<=(nb/2)-1; j++)
                cout << " ";
            
            cout << "*\n";
        }
    }
    
    return 0;
}
