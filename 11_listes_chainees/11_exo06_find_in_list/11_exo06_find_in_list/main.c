//
//  main.c
//  11_exo06_find_in_list
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
void Affiche(Maillon *);
Maillon * EstPresent(Maillon *, int);

int main(int argc, const char * argv[]) {
    int i, nombre, NbAchercher;
    Maillon * maListe = NULL;
    Maillon * element = malloc(sizeof(*element));
    
    printf("Saisir un premier entier : ");
    scanf("%d",&nombre);
    
    element->valeur = nombre;
    element->suivant = NULL;
    maListe = element;
    
    for(i=1; i<=5; i++)
    {
        printf("Saisir un entier : ");
        scanf("%d",&nombre);
        maListe = Insere(maListe, nombre);
    }
    
    Affiche(maListe);
    
    printf("Saisir le nombre recherché : ");
    scanf("%d",&NbAchercher);
    
    (EstPresent(maListe,NbAchercher) != NULL) ? printf("Valeur présente\n") : printf("Valeur absente\n");
    
    return 0;
}

void Affiche(Maillon * liste)
{
    if(liste == NULL)
    {
        printf("NULL\n");
        return;
    }
    else {
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
    element->valeur = Nb;
    element->suivant = liste;
    liste = element;
    return liste;
}

Maillon * EstPresent(Maillon * liste, int Nb)
{
    if(liste == NULL)
        return NULL;
    if(liste->valeur == Nb)
        return liste;
    else
        return EstPresent(liste->suivant, Nb);
}
