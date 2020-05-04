//
//  main.c
//  exo9_tableau
//
//  Created by Francois LABASTIE on 04/05/2020.
//  Copyright © 2020 Francois LABASTIE. All rights reserved.
//

#include <stdio.h>
#include <stdlib.h>

void affiche_tab(int*, int, int);
void affiche_tab_reverse(int*, int);

int main(int argc, const char * argv[]) {
    //
    int n, i;
    int indice = 0;
    int * tab;
    printf("Saisir le nombre d'éléments du tableau: ");
    scanf("%d",&n);
    tab = malloc(n * sizeof(int));
    // saisie des éléments
    for(i=0; i<n; i++)
    {
        printf("Saisir l'éléments %d du tableau: ", i+1);
        scanf("%d",&tab[i]);
    }
    // affichage tableau
    affiche_tab(tab, indice, n);
    free(tab);
    return 0;
}

void affiche_tab(int tab[], int indice, int n){
    if(indice==(n-1)) // dernière case
        printf("%d\n", tab[n-1]); // affiche dernier
    else{
        printf("%d ; ", tab[indice]);
        affiche_tab(tab, indice+1, n);
    }
}

void affiche_tab_reverse(int tab[], int n)
{
    if(n>=0){
        printf("%d\n", tab[n-1]);
        affiche_tab_reverse(tab, n-1);
    }
}
