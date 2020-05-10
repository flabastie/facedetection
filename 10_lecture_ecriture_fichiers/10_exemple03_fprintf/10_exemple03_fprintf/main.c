//
//  main.c
//  10_exemple03_fprintf
//
//  Created by Francois LABASTIE on 09/05/2020.
//  Copyright © 2020 Francois LABASTIE. All rights reserved.
//

#include <stdio.h>
#include <stdlib.h>

int main(int argc, const char * argv[]) {
    int Annee;
    FILE* fic = NULL;
    fic = fopen("Fichier1.txt","w");
    
    if(fic != NULL)
    {
        printf("Quelle est l'année en cours ? ");
        scanf("%d",&Annee);
        // écriture dans le fichier
        fprintf(fic, "Annee actuelle : %d", Annee);
        
        fclose(fic);
        printf("Ecriture ok\n");
    }
    else
        printf("Ouverture impossible\n");
    return 0;
}
