//
//  main.c
//  11_exo01_affichage_recursif
//
//  Created by Francois LABASTIE on 21/05/2020.
//  Copyright © 2020 Francois LABASTIE. All rights reserved.
//

#include <stdio.h>
#include <stdlib.h>

typedef struct Maillon Maillon;
struct Maillon {
    int valeur;
    Maillon * suivant;
};

void Affiche (Maillon *);

int main(int argc, const char * argv[]) {
    int i=0;
    Maillon * element = malloc(sizeof(*element));
    Maillon * maListe = NULL;
    element->valeur = 8;
    element->suivant = NULL;
    maListe = element;
    
    for(i=6; i>=0; i--){
        if(i % 2 == 0)
        {
            Maillon * element = malloc(sizeof(*element));
            element->valeur = i;
            element->suivant = NULL;
        
            element->suivant = maListe;
            maListe = element;
        }
    }
    Affiche (maListe);
    return 0;
}

void Affiche (Maillon * liste)
{
    if(liste == NULL)
        printf("NULL\n");
    else {
        printf("%d -> ", liste->valeur);
        Affiche (liste->suivant);
    }
}
