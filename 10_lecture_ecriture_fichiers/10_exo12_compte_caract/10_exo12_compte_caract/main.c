//
//  main.c
//  10_exo12_compte_caract
//
//  Created by Francois LABASTIE on 13/05/2020.
//  Copyright © 2020 Francois LABASTIE. All rights reserved.
//

#include <stdio.h>
#include <stdlib.h>

int main(int argc, const char * argv[]) {
    FILE* fic = NULL;
    int NBcar = 0;
    fic = fopen("File.txt","r");
    
    if(!fic)
    {
        printf("Ouverture impossible !\n");
        exit(-1);
    }
    
    while(!feof(fic))
    {
        fgetc(fic);
        NBcar++;
    }

    printf("Nombre de caractères dans le fichier :  %d \n", NBcar-1);
    
    fclose(fic);
    return 0;
}



