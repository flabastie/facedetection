//
//  main.c
//  10_exo10_lecture_texte
//
//  Created by Francois LABASTIE on 11/05/2020.
//  Copyright © 2020 Francois LABASTIE. All rights reserved.
//

#include <stdio.h>
#include <stdlib.h>

int main(int argc, const char * argv[]) {
    int c;
    FILE* fic = NULL;
    
    fic = fopen("File.txt", "r");
    if(!fic)
    {
        printf("Ouverture impossible!\n");
        // sortie programme
        exit(-1);
    }
    
    // tant que pas fin de fichier
    while(!feof(fic))
    {
        c=fgetc(fic);
        // si non fin de fichier
        if(c!=EOF)
            printf("%c",c);
    }
    printf("\n");
    fclose(fic);

    return 0;
}
