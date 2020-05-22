//
//  main.c
//  11_exo14_recopie_dans_liste
//
//  Created by Francois LABASTIE on 22/05/2020.
//  Copyright © 2020 Francois LABASTIE. All rights reserved.
//

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define TRUE 1
#define FALSE 0

typedef struct maillon maillon;
struct maillon{
    int p;
    maillon * suivant;
};

void affiche(maillon *);
void inserer_tete(maillon *, int);
void supprimer_nb(maillon *);
void recopie_table_liste(int *, int, maillon *);

int main(int argc, const char * argv[]) {
    int i, n;
    int * table;
    maillon * m = malloc(sizeof(maillon));
    
    printf("Combien d'entiers ? ");
    scanf("%d",&n);
    
    table = malloc(sizeof(int)*n);
    
    for(i=0; i<n; ++i)
    {
        table[i] = rand();
    }
    
    recopie_table_liste(table, n, m);
    affiche(m);
    free(table);
    
    return 0;
}

void affiche(maillon * m)
{
    if(m->suivant != NULL){
        affiche(m->suivant);
    }
    printf("P: %d\n",m->p);
    
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

void recopie_table_liste(int * table, int l, maillon * m)
{
    int i;
    m->p = table[0];
    m->suivant = NULL;
    
    for(i=1; i<l; ++i)
    {
        inserer_tete(m, table[i]);
    }
    return;
}
