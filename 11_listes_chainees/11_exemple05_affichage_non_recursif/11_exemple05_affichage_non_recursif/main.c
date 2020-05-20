//
//  main.c
//  11_exemple05_affichage_non_recursif
//
//  Created by Francois LABASTIE on 20/05/2020.
//  Copyright © 2020 Francois LABASTIE. All rights reserved.
//

#include<stdio.h>
#include<stdlib.h>

typedef struct Maillon Maillon;
struct Maillon {
    int valeur;
    Maillon *suivant;
};
// Prototype de la fonction affiche
void Affiche (Maillon *);

int main(int argc, const char * argv[]) {
    int i;
    Maillon * maListe;
    Maillon * element = malloc(sizeof(* element));
    element->valeur = 0;
    element->suivant = NULL;
    maListe = element;

    for (i=1; i<4; i++)
    {
        Maillon *element = malloc(sizeof(*element));
        element->valeur = i;
        element->suivant = NULL;
        element->suivant = maListe;
        maListe = element;
    }
    Affiche(maListe);

    return 0;
}

void Affiche(Maillon *liste)
{
    if (liste == NULL)
    {
        printf("Liste vide");
        exit(EXIT_FAILURE);
    }
    while (liste != NULL)
    {
        printf("%d -> ", liste->valeur);
        liste = liste->suivant;
    }
    printf("NULL\n");
}
