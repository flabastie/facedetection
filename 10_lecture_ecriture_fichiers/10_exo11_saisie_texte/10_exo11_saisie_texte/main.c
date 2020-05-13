//
//  main.c
//  10_exo11_saisie_texte
//
//  Created by Francois LABASTIE on 13/05/2020.
//  Copyright © 2020 Francois LABASTIE. All rights reserved.
//

#include <stdio.h>
#include <stdlib.h>

int main(int argc, const char * argv[]) {
    FILE* fic;
    char tab[100];
    fic = fopen("File.txt","w");
    
    if(fic != NULL)
    {
        printf("Saisir une phrase : ");
        gets(tab);
        printf("Phrase saisie : %s\t", tab);
        fputs(tab,fic);
        fclose(fic);
    }
    else
    {
        printf("Ouverture impossible !\n");
    }
    
    return 0;
}
