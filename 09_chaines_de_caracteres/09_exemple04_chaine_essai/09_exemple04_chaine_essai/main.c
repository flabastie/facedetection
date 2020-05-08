//
//  main.c
//  09_exemple04_chaine_essai
//
//  Created by Francois LABASTIE on 08/05/2020.
//  Copyright © 2020 Francois LABASTIE. All rights reserved.
//

#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main(int argc, const char * argv[]) {
    char MOT[] = "Essai";
    int i;
    printf("Votre mot : %s\n", MOT);
    for(i=0; i<6; i++)
    {
        printf("MOT[%d] : %c\n", i, MOT[i]);
    }
    return 0;
}

// Une chaîne de caractères étant un tableau
// donc le dernier élément est le symbole de fin de chaîne "\0" ;
// pas besoin d'envoyer en argument à une fonction la longueur du tableau :
// le tableau seul suffit
