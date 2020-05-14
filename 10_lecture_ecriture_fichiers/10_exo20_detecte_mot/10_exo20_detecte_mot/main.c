//
//  main.c
//  10_exo20_detecte_mot
//
//  Created by Francois LABASTIE on 14/05/2020.
//  Copyright © 2020 Francois LABASTIE. All rights reserved.
//

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void EstPresent(FILE*, char*);

int main(int argc, const char * argv[]) {
    FILE* fic = NULL;
    char mot[30];
    fic = fopen("File.txt","r");
    
    printf("Saisir un mot : ");
    scanf("%s",&mot);
    
    EstPresent(fic,mot);
    return 0;
}

void EstPresent(FILE* fic, char* mot)
{
    char buffer[20];
    int caract;
    int i,j;
    
    if(fic != NULL)
    {
        while(!feof(fic))
        {
            // réinitialisation du buffer
            for(j=0; j<20; j++)
            {
                buffer[j]='\0';
            }
            i=0;
            
            // découpage des mots du fichier texte
            do {
                caract = fgetc(fic);
                if (caract != ' ' && caract != '.' && caract != '\n')
                {
                    buffer[i]=caract;
                    i++;
                }
            } while (caract != ' ' && caract != '.' && caract != EOF);
            
            // on vérifie si les chaines sont égales
            if (strcmp(buffer,mot)==0)
            {
                printf("Mot present ... \n");
            }
        }
        fclose(fic);
    }
    else
    {
        printf("Ouverture impossible\n");
    }
}
