//
//  main.c
//  09_exo03_string
//
//  Created by Francois LABASTIE on 08/05/2020.
//  Copyright © 2020 Francois LABASTIE. All rights reserved.
//

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(int argc, const char * argv[]) {
    char Ch1[100];
    printf("Saisir un mot : ");
    scanf("%s",&Ch1);
    printf("Il y a %ld lettre(s) dans votre mot saisi (%s) : \n", strlen(Ch1), Ch1);
    return 0;
}
