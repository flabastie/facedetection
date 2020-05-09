//
//  main.c
//  09_exo16_recherche_chaine
//
//  Created by Francois LABASTIE on 09/05/2020.
//  Copyright © 2020 Francois LABASTIE. All rights reserved.
//

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void Cherche(char*, char*);
int Identique(char*, char*);

int main(int argc, const char * argv[]) {
    int Longueur = 200;
    char chaine[Longueur];
    char sous_chaine[Longueur];
    
    printf("Saisir une chaine de caractères : ");
    scanf("%s",&chaine);
    printf("Saisir une chaine de caractères à rechercher : ");
    scanf("%s",&sous_chaine);
    
    Cherche(chaine, sous_chaine);
    return 0;
}

void Cherche(char* chaine, char* sous_chaine)
{
    int rang = 1;
    // tant qu'on n'est pas en fin de chaine...
    while(*chaine)
    {
        if(Identique(chaine, sous_chaine))
        {
            printf("La sous_chaine se trouve en position %d\n",rang);
            return;
        }
        chaine++;
        rang++;
    }
    printf("Sous chaîne non trouvée");
}

int Identique(char* chaine, char* sous_chaine)
{
    // tant que le caractère testé de sous_chaine
    // et chaine est identique on boucle
    while(*sous_chaine && *chaine)
    {
        // si les caractères sont différents
        // à cet endroit on renvoie 0 et on sort
        if(*sous_chaine != *chaine)
            return 0;
        else
        {
            // on se décale d'un cran dans chaine et sous_chaine
            // car les caractères étaient identiques
            chaine++;
            sous_chaine++;
        }
    }
    // on renvoie 1 car on est sorti de la boucle
    // donc la sous chaine a été trouvée
    return !(*sous_chaine);
}
