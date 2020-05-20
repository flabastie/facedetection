//
//  main.c
//  11_exemple09_fonction_suppression_dernier
//
//  Created by Francois LABASTIE on 20/05/2020.
//  Copyright © 2020 Francois LABASTIE. All rights reserved.
//

#include <stdio.h>
#include <stdlib.h>

typedef struct Maillon Maillon;
struct Maillon {
    int valeur;
    Maillon *suivant;
};

// Prototype des fonctions
Maillon* Insere (Maillon *, int);
Maillon* SupprimeMaillonLast(Maillon *);
void Affiche(Maillon *);

int main(int argc, const char * argv[]) {
        Maillon *maListe ;
        Maillon *element = malloc(sizeof(*element)); int i, nombre;
        // int val,valAinserer;
    
    printf("Saisir un premier entier : ");
    scanf("%d", &nombre);
    
    element->valeur = nombre;
    element->suivant=NULL;
    maListe = element;
    
    for (i=1; i<=4; i++)
    {
        printf("Saisir un entier : ");
        scanf("%d", &nombre);
        maListe = Insere (maListe,nombre);
    }
    printf("Avant suppression : \n");
    Affiche(maListe);
    maListe = SupprimeMaillonLast(maListe);
    printf("Apres suppression : \n");
    Affiche(maListe);
    
    return 0;
}

Maillon* Insere (Maillon *liste, int Nb) {
    Maillon *element = malloc(sizeof(*element));
    if (liste == NULL || element == NULL)
    {
        printf("Liste vide ou maillon vide\n ");
        exit(EXIT_FAILURE);
    }
    element->valeur = Nb;
    element->suivant = liste;
    liste = element;
    return liste;
}

Maillon * SupprimeMaillonLast (Maillon *liste){
    Maillon *p = liste;
    if (p == NULL)
        return NULL;
    if (p->suivant == NULL)
        return NULL;
    else if (p->suivant->suivant == NULL)
    {
        p->suivant= NULL;
        free(p->suivant);
        return liste;
    }
    else
        SupprimeMaillonLast (p->suivant);
    return liste;
}

void Affiche(Maillon *liste){
    if (liste == NULL)
    {
        printf("NULL\n");
        return;
    }
    else {
        printf("%d -> ", liste->valeur);
        Affiche(liste->suivant);
        return;
    }
}
