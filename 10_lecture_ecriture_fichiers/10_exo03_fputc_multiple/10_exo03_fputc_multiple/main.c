//
//  main.c
//  10_exo03_fputc_multiple
//
//  Created by Francois LABASTIE on 10/05/2020.
//  Copyright © 2020 Francois LABASTIE. All rights reserved.
//

#include <stdio.h>
#include <stdlib.h>

int main(int argc, const char * argv[]) {

    FILE* fic = NULL;
    fic = fopen("Test2.txt","a");
    
    if(fic != NULL)
    {
        fputc('1', fic);
        fputc('\n', fic);
        fputc('2', fic);
        fclose(fic);
        printf("Ecriture ok \n");
    }
    else
        printf("Ouverture impossible !\n");
    
    return 0;
}

