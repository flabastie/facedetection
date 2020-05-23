//
//  main.cpp
//  12_exo13_lecture_fichier
//
//  Created by Francois LABASTIE on 23/05/2020.
//  Copyright © 2020 Francois LABASTIE. All rights reserved.
//

#include <iostream>
#include <cstdio>
#include <cstdlib>
using namespace std;

int NbMot(FILE * fic);

int main(int argc, const char * argv[]) {
    FILE * fic;
    fic = fopen("File.txt","r");
    
    if(fic != NULL)
    {
        cout << "Le nombre de mot(s) est : " << NbMot(fic) << endl;
        fclose(fic);
    }
    else {
        cout << "Ouverture impossible.\n";
    }

    return 0;
}

int NbMot(FILE * fic)
{
    int NbEspaces = 0;
    char caract;
    
    while (!feof(fic))
    {
        caract = fgetc(fic);
        if(caract != EOF)
            cout << caract;
        if(caract == 32)
            NbEspaces++;
    }
    cout << "\n";
    return ++NbEspaces;
}
