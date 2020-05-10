//
//  main.c
//  10_exo02_fputs
//
//  Created by Francois LABASTIE on 10/05/2020.
//  Copyright © 2020 Francois LABASTIE. All rights reserved.
//

#include <stdio.h>
#include <stdlib.h>

int main(int argc, const char * argv[]) {
    char mot[20];
    FILE* fic = NULL;
    
    printf("Saisir un mot : ");
    scanf("%s",&mot);
    
    fic = fopen("Test1.txt","a");
    
    if(fic != NULL)
    {
        fputs(mot, fic);
        fclose(fic);
        printf("Ecriture ok \n");
    }
    else
        printf("Ouverture impossible !\n");
    
    return 0;
}
