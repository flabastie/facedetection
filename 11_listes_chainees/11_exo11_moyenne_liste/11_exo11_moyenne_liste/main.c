//
//  main.c
//  11_exo11_moyenne_liste
//
//  Created by Francois LABASTIE on 22/05/2020.
//  Copyright © 2020 Francois LABASTIE. All rights reserved.
//

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define COUNT 5
#define TRUE 1
#define FALSE 0

typedef struct maillon maillon;
struct maillon{
    float val;
    maillon * suivant;
};

void affiche(maillon *);
void inserer_tete(maillon *, float);
int longueur(maillon * m);
float moyenne(maillon *, float, int);

int main(int argc, const char * argv[]) {
    int i;
    maillon * m = malloc(sizeof(maillon));
    
    m->val = 0.0;
    m->suivant = NULL;
    
    for(i=1; i<COUNT; ++i)
    {
        inserer_tete(m, i*2.0);
    }
    
    printf("Affichage de la liste : \n");
    affiche(m);
    printf("\n");
    
    printf("Nombre d'éléments dans la liste : %d\n",longueur(m));
    printf("\n");
    
    printf("Moyenne des valeurs de la liste : %.2f\n",moyenne(m,0.0,1));
    
    return 0;
}

void affiche(maillon * m)
{
    if(m->suivant != NULL)
        affiche(m->suivant);
    printf("Valeur: %.2f\n",m->val);
    return;
}

void inserer_tete(maillon * m, float v)
{
    maillon * tmp;
    tmp = malloc(sizeof(maillon));
    
    tmp->val = m->val;
    tmp->suivant = m->suivant;
    
    m->val = v;
    m->suivant = tmp;
    
    return;
}

int longueur(maillon * m)
{
    if(m->suivant == NULL)
        return 1;
    else
        return (longueur(m->suivant)+1);
    return 0;
}

float moyenne(maillon * m, float s, int l)
{
    if(m->suivant == NULL)
    {
        return (m->val + s)/((float)l);
    }
    return moyenne(m->suivant, (s+m->val), (l+1));
}
