//
//  main.c
//  10_exo07_reels
//
//  Created by Francois LABASTIE on 11/05/2020.
//  Copyright © 2020 Francois LABASTIE. All rights reserved.
//

#include <stdio.h>
#include <stdlib.h>

int main(int argc, const char * argv[]) {
    FILE* fic = NULL;
    int i, nbElements;
    float reel;
    
    printf("Combien de réels voulez-vous saisir ? ");
    scanf("%d",&nbElements);
    
    fic = fopen("Fichier1.txt","a");
    if(fic != NULL){
        for(i=0; i<nbElements; i++)
        {
            printf("Saisir le réel %d : ", i+1);
            scanf("%f",&reel);
            fprintf(fic, "%.2f ", reel);
        }
        close(fic);
        printf("Ecriture ok.\n");
    }
    else
    {
        printf("Problème Ecriture !\n");
    }
    
    return 0;
}
