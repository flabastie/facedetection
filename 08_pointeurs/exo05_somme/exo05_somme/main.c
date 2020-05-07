//
//  main.c
//  exo05_somme
//
//  Created by Francois LABASTIE on 07/05/2020.
//  Copyright © 2020 Francois LABASTIE. All rights reserved.
//

#include <stdio.h>
#include <stdlib.h>

int Somme(int *, int *);

int main(int argc, const char * argv[]) {
    //
    int a, b;

    printf("Saisir un entier a : ");
    scanf("%d", &a);
    printf("Saisir un entier b : ");
    scanf("%d", &b);
    
    printf("Somme de %d + %d = %d\n", a,b,Somme(&a, &b));
    
    return 0;
}

int Somme(int* a, int* b)
{
    return (*a + *b);
}
