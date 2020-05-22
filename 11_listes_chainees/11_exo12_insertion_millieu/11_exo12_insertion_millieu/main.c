//
//  main.c
//  11_exo12_insertion_millieu
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
void inserer_avant(maillon *, float, float);
int flottant_egal(float, float);

int main(int argc, const char * argv[]) {
    int i;
    float Val, ValAjout;
    maillon * m = malloc(sizeof(maillon));
    
    m->val = 0.00;
    m->suivant = NULL;
    
    for(i=1; i<COUNT; ++i)
    {
        inserer_tete(m,i*2.0);
    }
    affiche(m);
    
    printf("Avant quelle valeur voulez-vous ajouter un maillon ? ");
    scanf("%f",&Val);
    
    printf("Quelle est la valeur à ajouter ? ");
    scanf("%f",&ValAjout);
    
    inserer_avant(m, ValAjout, Val);
    affiche(m);
    
    return 0;
}

void affiche(maillon * m)
{
    if(m->suivant != NULL){
        affiche(m->suivant);
    }
    printf("Valeur: %12.3f\n",m->val);
    
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

void inserer_avant(maillon * m, float v, float ap)
{
    maillon * tmp;
    
    if(flottant_egal(m->val,ap))
    {
        tmp = malloc(sizeof(maillon));
        tmp->val = v;
        tmp->suivant = m->suivant;
        m->suivant = tmp;
    }
    else{
        if(m->suivant != NULL)
            inserer_avant(m->suivant, v, ap);
        else
            printf("Valeur inexistant %4.1f dans la liste de départ\n",ap);
    }
    return;
}

int flottant_egal(float x, float y)
{
    if(((x-y)<0.000001) && ((y-x) < 0.000001))
    {
        return TRUE;
    }
    else {
        return FALSE;
    }
}
