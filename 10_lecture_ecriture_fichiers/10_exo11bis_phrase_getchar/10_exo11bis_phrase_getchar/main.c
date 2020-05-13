//
//  main.c
//  10_exo11bis_phrase_getchar
//
//  Created by Francois LABASTIE on 13/05/2020.
//  Copyright © 2020 Francois LABASTIE. All rights reserved.
//

#include <stdio.h>
#include <stdlib.h>

int main(int argc, const char * argv[]) {
    FILE* fic = NULL;
    char mot;
    fic = fopen("File.txt","w");
    
    if(fic != NULL)
    {
        printf("Saisir une phrase complète : ");
        while( (mot =getchar()) != '\n' && mot != EOF)
        {
            fputc(mot,fic);
        }
    }
    else
        printf("Ouverture impossible !\n");
    
    fclose(fic);
    printf("Phrase enregistrée !\n");
    
    return 0;
}
