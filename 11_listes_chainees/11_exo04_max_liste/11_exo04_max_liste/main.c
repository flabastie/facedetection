//
//  main.c
//  11_exo04_max_liste
//
//  Created by Francois LABASTIE on 21/05/2020.
//  Copyright © 2020 Francois LABASTIE. All rights reserved.
//

#include <stdio.h>
#include <stdlib.h>

typedef struct Maillon Maillon;
struct Maillon{
    int valeur;
    Maillon * suivant;
};

Maillon * Insere(Maillon *, int);
int Maximum(Maillon *, int);
void Affiche(Maillon *);

int main(int argc, const char * argv[]) {
    int i, nombre;
    Maillon * maListe = NULL;
    Maillon * element = malloc(sizeof(*element));
    
    printf("Saisir un premeier entier : ");
    scanf("%d",&nombre);
    
    element->valeur = nombre;
    element->suivant = NULL;
    maListe = element;
    
    for(i=1; i<5; i++)
    {
        printf("Saisir un entier : ");
        scanf("%d",&nombre);
        maListe = Insere(maListe, nombre);
    }
    
    Affiche(maListe);
    printf("Plus grand maillon : %d\n",Maximum(maListe, maListe->valeur));
    
    return 0;
}

void Affiche(Maillon * liste)
{
    if(liste == NULL)
        printf("NULL\n");
    else{
        printf("%d -> ",liste->valeur);
        Affiche(liste->suivant);
    }
}

Maillon * Insere(Maillon * liste, int Nb)
{
    Maillon * element = malloc(sizeof(*element));
    if(liste == NULL || element == NULL)
    {
        printf("Liste vide ou maillon vide\n");
        exit(EXIT_FAILURE);
    }
    else {
        element->valeur = Nb;
        element->suivant = liste;
        liste = element;
        return liste;
    }
}

int Maximum(Maillon * liste, int max)
{
    if(liste == NULL){
        printf("NULL\n");
        exit(EXIT_FAILURE);
    }
    if(liste->suivant == NULL)
        return max;
    else if (liste->suivant->valeur > max)
        return (Maximum(liste->suivant, liste->suivant->valeur));
    else
        return (Maximum(liste->suivant, max));
}
