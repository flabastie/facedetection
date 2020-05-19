//
//  main.c
//  11_exemple01
//
//  Created by Francois LABASTIE on 15/05/2020.
//  Copyright © 2020 Francois LABASTIE. All rights reserved.
//

#include <stdio.h>
#include <stdlib.h>

int main(int argc, const char * argv[]) {
    // création de la structure de la liste
    typedef struct Maillon Maillon;
    struct Maillon
    {
        int valeur;
        Maillon *suivant;
    };
    // création d'un maillon nommé élément et pointeur nommé debut pointant sur un maillon
    Maillon *element = malloc(sizeof(*element));
    Maillon *debut;
    debut = NULL;
    
    // affectation pour le premier maillon
    element->valeur=10;
    element->suivant=NULL;
    
    // on fait pointer su l'élément
    debut = element;
    
    // affichage
    printf("Liste : %d\n", debut->valeur);
    return 0;
}
