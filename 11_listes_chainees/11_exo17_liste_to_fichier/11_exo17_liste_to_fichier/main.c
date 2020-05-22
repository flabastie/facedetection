//
//  main.c
//  11_exo17_liste_to_fichier
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
void affiche_tab(int *, int);
void inserer_tete(maillon *, int);
void recopie_liste_fichier(maillon *, FILE*);

int main(int argc, const char * argv[]) {
    int i, n;
    FILE* fic;
    maillon * m = malloc(sizeof(maillon));
    fic = fopen("File.txt", "w");
    
    printf("Combien d'entiers voulez-vous ? ");
    scanf("%d",&n);
    
    m->p = rand();
    m->suivant = NULL;
    
    for(i=1; i<n; ++i)
    {
        inserer_tete(m, rand());
    }
    recopie_liste_fichier(m, fic);
    affiche(m);
    
    fclose(fic);

    return 0;
}

void affiche(maillon * m)
{
    if(m->suivant != NULL){
        affiche(m->suivant);
    }
    else{
        printf("-- end --\n");
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

void recopie_liste_fichier(maillon * m, FILE* fic)
{
    maillon * tmp = malloc(sizeof(maillon));
    if(fic != NULL)
    {
        tmp = m;
        while(tmp != NULL)
        {
            fprintf(fic, "%d\n", tmp->p);
            tmp = tmp->suivant;
        }
    }
    else
    {
        printf("Ouverture fichier impossible. \n");
    }
    return;
}
