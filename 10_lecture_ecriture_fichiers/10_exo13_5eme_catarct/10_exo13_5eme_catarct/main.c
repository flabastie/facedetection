//
//  main.c
//  10_exo13_5eme_catarct
//
//  Created by Francois LABASTIE on 13/05/2020.
//  Copyright © 2020 Francois LABASTIE. All rights reserved.
//

#include <stdio.h>
#include <stdlib.h>

int main(int argc, const char * argv[]) {
    FILE* fic = NULL;
    int NBcar = 0;
    char leChar = ' ';
    fic = fopen("File.txt","r");
    
    if(!fic)
    {
        printf("Ouverture impossible !\n");
        exit(-1);
    }
    
    while(!feof(fic))
    {
        leChar = fgetc(fic);
        if(NBcar == 5)
        {
            printf("5ème élément :  %c \n", leChar);
            exit(0);
        }
        NBcar++;
    }
    
    fclose(fic);
    return 0;
}
