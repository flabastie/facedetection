//
//  main.c
//  10_exo05_fprintf_tab
//
//  Created by Francois LABASTIE on 10/05/2020.
//  Copyright © 2020 Francois LABASTIE. All rights reserved.
//

#include <stdio.h>
#include <stdlib.h>

int main(int argc, const char * argv[]) {
    
    FILE* fic = NULL;
    int i;
    int tab[5];
    
    for(i=0; i<5; i++)
    {
        printf("Saisir un entier : ");
        scanf("%d",&tab[i]);
    }
    
    fic = fopen("Test1.txt","a");
    if(fic != NULL)
    {
        for(i=0; i<5; i++)
        {
            fprintf(fic, "%d ", tab[i]);
        }
        fclose(fic);
        printf("Ecriture ok \n");
    }
    else
        printf("Ouverture impossible !\n");
    
    return 0;
}
