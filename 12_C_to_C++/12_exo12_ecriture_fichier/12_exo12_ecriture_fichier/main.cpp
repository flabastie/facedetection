//
//  main.cpp
//  12_exo12_ecriture_fichier
//
//  Created by Francois LABASTIE on 23/05/2020.
//  Copyright © 2020 Francois LABASTIE. All rights reserved.
//

#include <iostream>
using namespace std;

int main(int argc, const char * argv[]) {
    int Nombre, i;
    FILE * fic = NULL;
    fic = fopen("File.txt", "w");
    
    if(fic != NULL)
    {
        for(i=1; i<=5; i++)
        {
            cout << "Saisissez un entier : ";
            cin >> Nombre;
            // attention : espace après le %d
            fprintf(fic, "%d ",Nombre);
        }
        fclose(fic);
        cout << "Nombres enregistrés dans le fichier.\n";
    }
    else
        cout << "Ouverture impossible.\n";
    
    return 0;
}
