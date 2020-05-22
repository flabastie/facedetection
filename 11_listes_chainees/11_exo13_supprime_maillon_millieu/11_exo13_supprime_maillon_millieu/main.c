//
//  main.c
//  11_exo13_supprime_maillon_millieu
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
void supprimer_nb(maillon *, int);
int flottant_egal(float, float);

int main(int argc, const char * argv[]) {
    int i;
    int n;
    maillon * m = malloc(sizeof(maillon));
    
    m->val = 0.00;
    m->suivant = NULL;
    
    for(i=1; i<COUNT; ++i)
    {
        inserer_tete(m,i*2.0);
    }
    
    affiche(m);
    
    printf("Quel numéro de maillon voulez-vous supprimer ? ");
    scanf("%d",&n);
    
    supprimer_nb(m,n);
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

void supprimer_nb(maillon * m, int n)
{
    maillon * tmp;
    if(n == 1)
    {
        if(m->suivant != NULL)
        {
            tmp = malloc(sizeof(maillon));
            tmp = m->suivant;
            m->val = m->suivant->val;
            m->suivant = m->suivant->suivant;
            free(tmp);
        }
    }
    else {
        if(m->suivant == NULL)
        {
            printf("Liste trop courte: impossible de supprimer au milieu.\n");
        }
        else {
            supprimer_nb(m->suivant, n-1);
        }
    }
    return;
}
