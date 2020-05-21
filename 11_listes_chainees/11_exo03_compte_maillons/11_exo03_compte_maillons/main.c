//
//  main.c
//  11_exo03_compte_maillons
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
int Compte(Maillon *);
void Affiche(Maillon *);

int main(int argc, const char * argv[]) {
    int i;
    Maillon * maListe;
    Maillon * element = malloc(sizeof(*element));
    element->valeur = 0;
    element->suivant = NULL;
    maListe = element;
    
    for(i=1; i<=4; i++)
        maListe = Insere(maListe,i);
    printf("Nombre de maillons : %d\n", Compte(maListe));

    return 0;
}

Maillon * Insere(Maillon * liste, int Nb)
{
    Maillon * element = malloc(sizeof(*element));
    
    if(liste == NULL || element == NULL)
    {
        printf("Liste vide ou maillon vide\n");
        exit(EXIT_FAILURE);
    }
    element->valeur = Nb;
    element->suivant = liste;
    liste = element;
    
    return liste;
}

int Compte(Maillon * liste)
{
    if(liste == NULL)
        return 0;
    else
        return (1+Compte(liste->suivant));
}
