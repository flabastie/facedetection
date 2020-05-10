//
//  main.c
//  10_exemple01_fputc
//
//  Created by Francois LABASTIE on 09/05/2020.
//  Copyright © 2020 Francois LABASTIE. All rights reserved.
//

#include <stdio.h>
#include <stdlib.h>

int main(int argc, const char * argv[]) {
    FILE* fic = NULL;
    fic = fopen("Fichier1.txt","a");
    
    if(fic != NULL)
    {
        fputc('1',fic);
        fclose(fic);
        printf("Ecriture ok\n");
    }
    else
        printf("Ouverture impossible\n");
    return 0;
}
