//
//  main.c
//  10_exo16_moyenne_fichier
//
//  Created by Francois LABASTIE on 13/05/2020.
//  Copyright © 2020 Francois LABASTIE. All rights reserved.
//

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(int argc, const char * argv[]) {
    FILE* fic = NULL;
    float note;
    float somme = 0;
    int cpt = 0;
    fic = fopen("File.txt","r");
    
    if(fic != NULL)
    {
        while (!feof(fic))
        {
            if (fgetc(fic)== ':')
            {
                fscanf(fic,"%f", &note);
                printf("%.2f\n",note);
                somme+=note;
                cpt++;
            }
        }
        printf("La moyenne des %d candidats est de %.2f\n",cpt,somme/cpt);
        fclose(fic);
    }
    else
    {
        printf("Ouverture impossible !\n");
    }
    return 0;
}
