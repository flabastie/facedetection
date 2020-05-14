//
//  main.c
//  10_exo17_3eme_mot
//
//  Created by Francois LABASTIE on 14/05/2020.
//  Copyright © 2020 Francois LABASTIE. All rights reserved.
//

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(int argc, const char * argv[]) {
    FILE* fic = NULL;
    int cpt = 0;
    char mot[100];
    fic = fopen("File.txt","r");
    
    if(fic != NULL)
    {
        while (!feof(fic))
        {
            if(fgetc(fic)==32)
            {
                cpt++;
                // le 3eme mot est situé après le 2eme espace
                if(cpt==2)
                {
                    fscanf(fic,"%s",mot);
                    printf("Le mot numéro %d est : %s\n",(cpt+1),mot);
                }
            }
        }
        fclose(fic);
    }
    else
    {
        printf("Ouverture impossible !\n");
        exit(-1);
    }
    return 0;
}
