//
//  main.c
//  09_exo05_structure_tableau
//
//  Created by Francois LABASTIE on 08/05/2020.
//  Copyright © 2020 Francois LABASTIE. All rights reserved.
//

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(int argc, const char * argv[]) {
    struct Personne{
        char nom[20];
        char prenom[20];
    };
    typedef struct Personne Personne;
    
    Personne Pers1;
    //char buffer;
    
    printf("Saisir le nom : ");
    scanf("%s",&Pers1.nom);
    //scanf("%c",&buffer);
    
    printf("Saisir le prénom : ");
    scanf("%s",&Pers1.prenom);
    //scanf("%c",&buffer);
    
    printf("Identité de la personne : %s %s\n", Pers1.prenom, Pers1.nom);
    return 0;
}
