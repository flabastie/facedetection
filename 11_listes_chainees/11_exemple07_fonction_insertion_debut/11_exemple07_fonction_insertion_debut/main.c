//
//  main.c
//  11_exemple07_fonction_insertion_debut
//
//  Created by Francois LABASTIE on 20/05/2020.
//  Copyright © 2020 Francois LABASTIE. All rights reserved.
//

#include <stdio.h>
#include <stdlib.h>

typedef struct Maillon Maillon;
struct Maillon {
    int valeur;
    Maillon * suivant;
};

// Prototype des fonctions
Maillon * Insere (Maillon *, int);
void Affiche (Maillon *);

int main(int argc, const char * argv[]) {
    Maillon *maListe;
    Maillon *element = malloc(sizeof(*element));
    int i;
    element->valeur = 0;
    element->suivant=NULL;
    maListe = element;
    
    for (i=1;i<=4;i++)
        maListe = Insere (maListe,i);
    Affiche(maListe);
    
    return 0;
}

Maillon * Insere (Maillon *liste, int Nb)
{
    Maillon *element = malloc(sizeof(*element));
    if (liste == NULL || element == NULL)
    {
        printf("Liste vide ou maillon vide");
        exit(EXIT_FAILURE);
    }
    element->valeur = Nb;
    element->suivant = liste;
    liste = element;
    return liste;
}

void Affiche(Maillon *liste)
{
    if (liste == NULL) {
        printf("NULL\n");
    }
    else {
        printf("%d -> ", liste->valeur);
        Affiche(liste->suivant);
        return;
    }
}
