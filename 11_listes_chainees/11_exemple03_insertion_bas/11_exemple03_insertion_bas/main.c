//
//  main.c
//  11_exemple03_insertion_bas
//
//  Created by Francois LABASTIE on 19/05/2020.
//  Copyright © 2020 Francois LABASTIE. All rights reserved.
//

#include <stdio.h>
#include<stdlib.h>

typedef struct Maillon Maillon;
struct Maillon
{
    int valeur;
    Maillon *suivant;
};

int main(int argc, const char * argv[]) {
    int i=0;
    Maillon *maListe ;
    Maillon *maListebis ;
    Maillon *element = malloc(sizeof(*element));
    
    //création du premier maillon
    element->valeur = 3;
    element->suivant=NULL;
    maListe = element;
    
    // duplication de la liste
    maListebis=maListe;

    for (i=2; i>=0;i--) {
        //Création d'un nouveau maillon
        Maillon *element = malloc(sizeof(*element));
        element->valeur = i;
        element->suivant = NULL;
        
        //parcours de la liste
        while (maListebis->suivant != NULL)
        {
            maListebis = maListebis->suivant;
        }
        //branchement du maillon en fin de liste
        maListebis->suivant = element;
        //Remontée de maListebis en tête de liste
        maListebis=maListe;
    }
    
    //affichage de la liste
    while (maListebis != NULL)
    {
        printf("%d -> ", maListebis->valeur);
        maListebis = maListebis->suivant;
    }
    printf("NULL\n");
    return 0;
}
