//
//  main.c
//  11_exo16_liste_fichier_texte
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
int longueur(maillon * m);
void recopie_fic_liste(FILE * fic, maillon * m);

int main(int argc, const char * argv[]) {
    int i, n;
    FILE * fic;
    maillon * m = malloc(sizeof(maillon));
    fic = fopen("File.txt", "w");
    
    printf("Combien d'entiers voulez-vous ? ");
    scanf("%d",&n);
    
    if(fic != NULL)
    {
        for(i=0; i<n; ++i)
        {
            fprintf(fic, "%d\n", rand());
        }
        fclose(fic);
    }
    else
    {
        printf("Ouverture du fichier impossible. \n");
    }
    fic = fopen("File.txt", "r");
    recopie_fic_liste(fic,m);
    affiche(m);
    printf("Longueur de la liste: %8d\n", longueur(m));
    
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

int longueur(maillon * m)
{
    if(m->suivant == NULL)
    {
        return 1;
    }
    else{
        return (longueur(m->suivant)+1);
    }
    return 1;
}

void recopie_fic_liste(FILE * fic, maillon * m)
{
    int r;
    if(fic != NULL)
    {
        fscanf(fic,"%d",&r);
        m->p = r;
        m->suivant = NULL;
        while(!feof(fic)){
            if(0 < fscanf(fic,"%d",&r))
                inserer_tete(m, r);
        }
        fclose(fic);
    }
    else {
        printf("Ouverture fichier impossible. \n");
    }
    return;
}
