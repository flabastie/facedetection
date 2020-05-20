//
//  main.c
//  11_exemple04_suppression_haut
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

int main() {
    int i=0;
    Maillon *maListe ;
    Maillon *maListebis ;
    Maillon *element = malloc(sizeof(*element));
    
    //création du maillon 1
    element->valeur = 0;
    element->suivant=NULL;
    maListe = element;
    
    //création de la liste
    for (i=1; i<4;i++) {
        Maillon *element = malloc(sizeof(*element));
        element->valeur = i;
        element->suivant = NULL;
        element->suivant = maListe;
        maListe = element;
    }
    maListebis = maListe;
    
    //affichage de la liste
    while (maListebis != NULL) {
        printf("%d -> ", maListebis->valeur);
        maListebis = maListebis->suivant;
    }
    printf("NULL\n");
    
    //remontée de malistebis en tete de liste
    maListebis = maListe;
    //suppression du maillon de tete
    maListe=maListe->suivant;
    free(maListebis);
    //remontée de malistebis en tête de liste
    maListebis = maListe;
    
    //affichage de la liste finale
    while (maListebis != NULL) {
        printf("%d -> ", maListebis->valeur);
        maListebis = maListebis->suivant;
    }
    printf("NULL\n");
}
