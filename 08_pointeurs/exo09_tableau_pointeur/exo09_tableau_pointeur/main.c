//
//  main.c
//  exo09_tableau_pointeur
//
//  Created by Francois LABASTIE on 07/05/2020.
//  Copyright © 2020 Francois LABASTIE. All rights reserved.
//

#include <stdio.h>
#include <stdlib.h>

void Affiche(float*, int);

int main(int argc, const char * argv[]) {
    int i;
    float tab[5];
    for(i=0; i<5; i++)
    {
        printf("Saisir le réel %d : ",i+1);
        scanf("%f",&tab[i]);
    }
    Affiche(tab, 5);
    return 0;
}

void Affiche(float* tab, int taille)
{
    int i;
    float* p = NULL;
    for(i=0; i<taille; i++)
    {
        // on fait pointer p sur le contenu de tab[i]
        p = &tab[i];
        // on affiche le contenu présent où pointe p
        printf("Elément %d : %.2f\n", (i+1), *p);
        p++;
    }
}
