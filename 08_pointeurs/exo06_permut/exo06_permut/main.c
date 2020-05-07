//
//  main.c
//  exo06_permut
//
//  Created by Francois LABASTIE on 07/05/2020.
//  Copyright © 2020 Francois LABASTIE. All rights reserved.
//

#include <stdio.h>
#include <stdlib.h>

void Permut(int*, int*);

int main(int argc, const char * argv[]) {
    int a, b;
    printf("Saisir un entier a : ");
    scanf("%d",&a);
    printf("Saisir un entier b : ");
    scanf("%d",&b);
    // permutation
    Permut(&a, &b);
    printf("a vaut %d\n", a);
    printf("b vaut %d\n", b);
    return 0;
}

void Permut(int* a, int* b)
{
    int tampon;
    tampon = *a;
    *a = *b;
    *b = tampon;
}
