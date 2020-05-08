//
//  main.c
//  09_exemple05_saisi_chaine
//
//  Created by Francois LABASTIE on 08/05/2020.
//  Copyright © 2020 Francois LABASTIE. All rights reserved.
//

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(int argc, const char * argv[]) {
    char Prenom[30];
    printf("Quel est votre prénom? : ");
    scanf("%s",&Prenom);
    printf("Votre prénom : %s \n", Prenom);
    return 0;
}
