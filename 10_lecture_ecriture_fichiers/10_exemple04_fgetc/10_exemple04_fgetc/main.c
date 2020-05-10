//
//  main.c
//  10_exemple04_fgetc
//
//  Created by Francois LABASTIE on 10/05/2020.
//  Copyright © 2020 Francois LABASTIE. All rights reserved.
//

#include <stdio.h>
#include <stdlib.h>

int main(int argc, const char * argv[]) {
    int caract;
    FILE* fic = NULL;
    fic = fopen("en.lproj/Fichier1.txt","r");
    
    if(fic != NULL)
    {
        do{
            caract = fgetc(fic);
            printf("%c",caract);
        } while (caract != EOF);
        
        printf("\n\n");
        fclose(fic);
    }
    else
        printf("Ouverture impossible\n");
    return 0;
}
