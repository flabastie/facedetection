//
//  main.c
//  11_exo10_liste_circulaire
//
//  Created by Francois LABASTIE on 21/05/2020.
//  Copyright © 2020 Francois LABASTIE. All rights reserved.
//

#include <stdio.h>
#include <stdlib.h>

typedef struct Maillon Maillon;
struct Maillon{
    float valeur;
    Maillon * suivant;
};

Maillon * Insere(Maillon *, float);
void Affiche(Maillon *, int);

int main(int argc, const char * argv[]) {
    Maillon * maListe;
    Maillon * element = malloc(sizeof(*element));
    Maillon * Pcopie;
    Pcopie = NULL;
    
    element->valeur = 3423.11;
    element->suivant = NULL;
    
    maListe = element;
    maListe = Insere(maListe, 890.46);
    maListe = Insere(maListe, 567.78);
    maListe = Insere(maListe, 34.5);
    
    // liste devien circulaire
    Pcopie = maListe;
    while(Pcopie->suivant != NULL)
        Pcopie = Pcopie->suivant;
    
    Pcopie->suivant = maListe;
    
    Affiche(maListe, 1);

    return 0;
}

Maillon * Insere(Maillon * liste, float Nb)
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

void Affiche(Maillon * liste, int i)
{
    if(liste == NULL)
        printf("NULL\n");
    else{
        printf("%.2f -> ",liste->valeur);
        printf(" %d",i);
        Affiche(liste->suivant, ++i);
        return;
    }
}
