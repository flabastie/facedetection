//
//  main.c
//  10_exo08_lecture_reels
//
//  Created by Francois LABASTIE on 11/05/2020.
//  Copyright © 2020 Francois LABASTIE. All rights reserved.
//

#include <stdio.h>
#include <stdlib.h>

int main(int argc, const char * argv[]) {
    int i;
    float reel;
    FILE* fic = NULL;
    
    fic = fopen("Fichier1.txt", "r");
    if(fic != NULL)
    {
        for(i=0; i<3; i++)
        {
            printf("Réel numéro %d : ",i+1);
            fscanf(fic, "%f", &reel);
            printf("%.2f\n", reel);
        }
        fclose(fic);
    }
    else
    {
        printf("Ouverture impossible!\n");
    }
    
    return 0;
}
