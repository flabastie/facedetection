//
//  main.c
//  11_exo15_tableau_dynamique
//
//  Created by Francois LABASTIE on 22/05/2020.
//  Copyright © 2020 Francois LABASTIE. All rights reserved.
//

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define COUNT 10
#define TRUE 1
#define FALSE 0

typedef struct maillon maillon;
struct maillon{
    int p;
    maillon * suivant;
};

void affiche(maillon *);
void affiche_tab(int *, int);
void inserer_tete(maillon *, int);
void recopie_liste_table(maillon *, int *, int);

int main(int argc, const char * argv[]) {
    int i;
    int n;
    int * table;
    maillon * m = malloc(sizeof(maillon));
    
    printf("Combien d'entiers voulez-vous ? ");
    scanf("%d",&n);
    
    table = malloc(sizeof(int)*n);
    
    m->p = rand();
    m->suivant = NULL;
    
    for(i=1; i<n; ++i)
    {
        inserer_tete(m, rand());
    }
    
    recopie_liste_table(m, table, n);
    printf("Affichage du tableau : \n");
    affiche_tab(table, n);
    printf("\nAffichage de la liste chainée : \n");
    affiche(m);
    free(table);
    
    return 0;
}

void affiche(maillon * m)
{
    printf("Liste: %d\n",m->p);
    if(m->suivant != NULL){
        affiche(m->suivant);
    }
    else{
        printf("-- end --\n");
    }
    return;
}

void inserer_tete(maillon * m, int n)
{
    maillon * tmp;
    tmp = malloc(sizeof(maillon));
    
    tmp->p = m->p;
    tmp->suivant = m->suivant;
    
    m->p = n;
    m->suivant = tmp;
    
    return;
}

void affiche_tab(int t[], int l)
{
    if(0<l)
    {
        printf("%d\n",t[0]);
        affiche_tab(++t, l-1);
    }
    return;
}

void recopie_liste_table(maillon * m, int * table, int l)
{
    int i;
    maillon *tmp;
    tmp = malloc(sizeof(maillon));
    
    tmp = m;
    
    for(i=0; i<l; ++i)
    {
        table[i] = tmp->p;
        tmp = tmp->suivant;
    }
    free(tmp);
    return;
}
