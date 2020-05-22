//
//  main.cpp
//  12_exo03_saisie_while
//
//  Created by Francois LABASTIE on 22/05/2020.
//  Copyright © 2020 Francois LABASTIE. All rights reserved.
//

#include <iostream>
#include <cstdlib>
#include <cstdio>
using namespace std;


int main(int argc, const char * argv[]) {
    int Note;
    cout << "Saisir votre note : " << endl;
    cin >> Note;
    while(Note<0 || Note>20)
    {
        cout << "Saisissez une note comprise entre 0 et 20\n";
        cin >> Note;
    }
    cout << "Bravo ! " << endl;
    return 0;
}
