//
//  main.c
//  10_exo18_insert_mot
//
//  Created by Francois LABASTIE on 14/05/2020.
//  Copyright © 2020 Francois LABASTIE. All rights reserved.
//

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(int argc, const char * argv[]) {
    FILE* fic = NULL;
    char chaine[30];
    char tampon[200];
    int cpt = 0;
    char caract;
    long curseur = 0;
    fic = fopen("File.txt","r+");
    
    printf("Saisir un mot : ");
    gets(chaine);
    
    if(fic != NULL)
    {
        while (!feof(fic))
        {
            caract = fgetc(fic);
            printf("%c",caract);
                if(caract==32)
                {
                    cpt++;
                    if(cpt==3)
                    {
                        curseur = ftell(fic);
                        fgets(tampon,200,fic);
                    }
                }
            }
        fseek(fic,curseur,SEEK_SET);
        fprintf(fic,"%s",chaine);
        fprintf(fic," %s",tampon);
        fclose(fic);
    }
    else
    {
        printf("Ouverture impossible !\n");
        exit(-1);
    }
    return 0;
}
