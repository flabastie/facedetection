//
//  main.c
//  10_exemple02_fputs
//
//  Created by Francois LABASTIE on 09/05/2020.
//  Copyright © 2020 Francois LABASTIE. All rights reserved.
//

#include <stdio.h>
#include <stdlib.h>

int main(int argc, const char * argv[]) {
    FILE* fic = NULL;
    fic = fopen("Fichier1.txt","w");
    
    if(fic != NULL)
    {
        fputs("Premiere ecriture dans un fichier",fic);
        fclose(fic);
        printf("Ecriture ok\n");
    }
    else
        printf("Ouverture impossible\n");
    return 0;
}
