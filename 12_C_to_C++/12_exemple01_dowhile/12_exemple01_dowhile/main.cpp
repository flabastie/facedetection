//
//  main.cpp
//  12_exemple01_dowhile
//
//  Created by Francois LABASTIE on 22/05/2020.
//  Copyright © 2020 Francois LABASTIE. All rights reserved.
//

#include <iostream>
#include <cstdio>
#include <cstdlib>
using namespace std;

int main(int argc, const char * argv[]) {
    int nb;
    
    do{
        cout << "Quel entier voulez-vous saisir ? " << endl;
        cin >> nb;
    } while (nb<0);
    cout << "Vous avez saisi l'entier : " << nb << endl;
    
    return 0;
}
