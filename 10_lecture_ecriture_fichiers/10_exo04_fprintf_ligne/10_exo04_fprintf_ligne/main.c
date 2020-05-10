//
//  main.c
//  10_exo04_fprintf_ligne
//
//  Created by Francois LABASTIE on 10/05/2020.
//  Copyright © 2020 Francois LABASTIE. All rights reserved.
//

#include <stdio.h>
#include <stdlib.h>

int main(int argc, const char * argv[]) {
    
    FILE* fic = NULL;
    fic = fopen("Test1.txt","a");
    int i, nombre;
    
    if(fic != NULL)
    {
        for(i=0; i<5; i++)
        {
            printf("Saisir un entier : ");
            scanf("%d",&nombre);
            fprintf(fic, "%d ", nombre);
        }
        fclose(fic);
        printf("Ecriture ok \n");
    }
    else
        printf("Ouverture impossible !\n");
    
    return 0;
}
