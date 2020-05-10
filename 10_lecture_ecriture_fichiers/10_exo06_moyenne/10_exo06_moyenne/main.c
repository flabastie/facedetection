//
//  main.c
//  10_exo06_moyenne
//
//  Created by Francois LABASTIE on 10/05/2020.
//  Copyright © 2020 Francois LABASTIE. All rights reserved.
//

#include <stdio.h>
#include <stdlib.h>

float MOY(int tab[], int max)
{
    float somme = 0.0;
    int i;
    
    for(i=0; i<max; i++)
    {
        somme += tab[i];
    }
    return (somme/max);
}

int main(int argc, const char * argv[]) {
    
    FILE* fic = NULL;
    int i;
    int tab[6];
    
    for(i=0; i<6; i++)
    {
        printf("Saisir un entier : ");
        scanf("%d",&tab[i]);
    }
    
    fic = fopen("Fichier1.txt","a");
    if(fic != NULL)
    {
        for(i=0; i<6; i++)
        {
            fprintf(fic, "%d\n", tab[i]);
        }
        fprintf(fic, "Moyenne : %.2f\n", MOY(tab,6));
        fclose(fic);
        printf("Ecriture ok \n");
    }
    else
        printf("Ouverture impossible !\n");
    
    return 0;
}
