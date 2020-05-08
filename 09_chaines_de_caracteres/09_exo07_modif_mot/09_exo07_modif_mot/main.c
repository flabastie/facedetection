//
//  main.c
//  09_exo07_modif_mot
//
//  Created by Francois LABASTIE on 08/05/2020.
//  Copyright © 2020 Francois LABASTIE. All rights reserved.
//

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void Affiche(char*);
void Modif(char*);

int main(int argc, const char * argv[]) {
    char Mot[50];
    printf("Saisir un mot : ");
    scanf("%s",&Mot);
    
    Affiche(Mot);
    Modif(Mot);
    Affiche(Mot);
    
    return 0;
}

void Affiche(char *Mot)
{
    printf("Votre mot : %s\n",Mot);
}

void Modif(char* Mot)
{
    printf("Quel est votre nouveau mot ? ");
    scanf("%s",Mot);
    return;
}
