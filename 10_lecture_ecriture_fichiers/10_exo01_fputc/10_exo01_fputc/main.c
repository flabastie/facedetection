//
//  main.c
//  10_exo01_fputc
//
//  Created by Francois LABASTIE on 10/05/2020.
//  Copyright © 2020 Francois LABASTIE. All rights reserved.
//

#include <stdio.h>
#include <stdlib.h>

int main(int argc, const char * argv[]) {
    char lettre;
    FILE* fic = NULL;
    printf("Saisir une lettre : ");
    scanf("%c",&lettre);
    
    fic = fopen("Test1.txt","a");
    
    if (fic != NULL)
    {
        fputc(lettre,fic);
        fclose(fic);
        printf("Ecriture ok\n");
    }
    else
        printf("Ouverture impossible\n");

    return 0;
}
