//
//  main.c
//  10_exo19_compte_phrases
//
//  Created by Francois LABASTIE on 14/05/2020.
//  Copyright © 2020 Francois LABASTIE. All rights reserved.
//

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(int argc, const char * argv[]) {
    FILE* fic = NULL;
    int NbPhrase = 0;
    int caract;
    fic = fopen("File.txt","r");
    
    if(fic != NULL)
    {
        while (!feof(fic))
        {
            caract = fgetc(fic);
            if (caract == '.' || caract == '?' || caract == '!')
            {
                NbPhrase++;
            }
        }
        printf("Il y a %d phrase(s) dans ce fichier texte\n",NbPhrase);
        fclose(fic);
    }
    else
    {
        printf("Ouverture impossible !\n");
        exit(-1);
    }
    return 0;
}
