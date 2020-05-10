//
//  main.c
//  10_exemple05_fscanf
//
//  Created by Francois LABASTIE on 10/05/2020.
//  Copyright © 2020 Francois LABASTIE. All rights reserved.
//

#include <stdio.h>
#include <stdlib.h>

int main(int argc, const char * argv[]) {
    double V1,V2;
    FILE* fic = NULL;
    fic = fopen("Fichier1.txt","r");
    
    if (fic != NULL)
    {
        fscanf(fic, "%lg %lg", &V1,&V2);
        fclose (fic);
    } else
        printf("Ouverture impossible\n");
    
    printf("%lg\t%lg \n", V1,V2);
    return 0;
}
