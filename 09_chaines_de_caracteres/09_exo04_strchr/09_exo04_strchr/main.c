//
//  main.c
//  09_exo04_strchr
//
//  Created by Francois LABASTIE on 08/05/2020.
//  Copyright © 2020 Francois LABASTIE. All rights reserved.
//

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(int argc, const char * argv[]) {
    char Ch1[100], Car;
    char buffer;
    int* P1;
    
    printf("Saisir un mot : ");
    scanf("%s",&Ch1);
    scanf("%c",&buffer);
    
    printf("Saisir un caractère à rechercher : ");
    scanf("%c",&Car);
    scanf("%c",&buffer);
    
    P1 = strchr(Ch1,Car);
    if(P1==NULL)
        printf("Caractère non trouvé !\n");
    else
        printf("Adresse du caractère : %p\n", P1);
    return 0;
}
