//
//  main.c
//  10_exo14_compte_mots
//
//  Created by Francois LABASTIE on 13/05/2020.
//  Copyright © 2020 Francois LABASTIE. All rights reserved.
//

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int NbMot(FILE*);

int main(int argc, const char * argv[]) {
    FILE* fic = NULL;
    fic = fopen("File.txt","r");
    
    if(fic != NULL)
    {
        printf("Le nombre de mots est : %d\n",NbMot(fic));
        fclose(fic);
    }
    else
    {
        printf("Ouverture impossible !\n");
    }
    return 0;
}


int NbMot(FILE* fic)
{
    int NbEspaces = 0;
    int caract;
    
    while(!feof(fic))
    {
        caract = fgetc(fic);
        if(caract != EOF)
             printf("%c\n",caract);
        if(caract == 32)
            NbEspaces++;
    }
    printf("\n");
    
    return ++NbEspaces;
}
