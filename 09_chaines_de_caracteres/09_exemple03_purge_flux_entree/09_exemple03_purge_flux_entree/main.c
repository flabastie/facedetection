//
//  main.c
//  09_exemple03_purge_flux_entree
//
//  Created by Francois LABASTIE on 08/05/2020.
//  Copyright © 2020 Francois LABASTIE. All rights reserved.
//

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(int argc, const char * argv[]) {
    char L1;
    char L2;
    char buffer; // pour élimination de la fin de chaine
    
    printf("Saisissez une lettre : ");
    scanf("%c",&L1);
    scanf("%c",&buffer); // caractère résiduel mis ds variable buffer
    
    printf("Saisissez une 2ème lettre : ");
    scanf("%c",&L2);
    scanf("%c",&buffer);
    
    printf("Lettre 1: %c\n",L1);
    printf("Lettre 2: %c\n",L2);
    
    return 0;
}
