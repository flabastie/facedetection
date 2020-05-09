//
//  main.c
//  09_exo15_mot_crypte
//
//  Created by Francois LABASTIE on 09/05/2020.
//  Copyright © 2020 Francois LABASTIE. All rights reserved.
//

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(int argc, const char * argv[]) {
    char mot[20];
    char motCrypte[20];
    int i;
    
    printf("Saisir un mot : ");
    scanf("%s",&mot);
    printf("Mot en clair : %s\n", mot);
    
    for(i=0; i<strlen(mot); i++)
    {
        if(mot[i]==122)
            // code ascci de z(122) - a(97)
            motCrypte[i] = 97;
        else if (mot[i]==90)
            // code ascii de Z(90) - A(65)
            motCrypte[i] = 65;
        else
            motCrypte[i] = ++mot[i];
    }
    printf("Mot crypté : ");
    for(i=0; i<strlen(motCrypte); i++)
    {
        printf("%c",motCrypte[i]);
    }
    printf("\n\n");
    
    return 0;
}
