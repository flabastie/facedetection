//
//  main.c
//  10_exo15_rang_reels
//
//  Created by Francois LABASTIE on 13/05/2020.
//  Copyright © 2020 Francois LABASTIE. All rights reserved.
//

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(int argc, const char * argv[]) {
    int i, Entier;
    // Entier stokera le rang du réel à afficher
    float Reel = 0.0;
    FILE* fic = NULL;
    
    printf("Quel réel afficher ? ");
    scanf("%d",&Entier);
    
    fic = fopen("File.txt","r");
    if(fic != NULL)
    {
        for(i=1; i<=Entier; i++)
            fscanf(fic,"%f", &Reel);
        
        printf("Réel numéro %d : %.2f\n",Entier,Reel);
        fclose(fic);
    }
    else
    {
        printf("Ouverture impossible !\n");
    }
    return 0;
}



