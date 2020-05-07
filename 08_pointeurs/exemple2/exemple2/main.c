//
//  main.c
//  exemple2
//
//  Created by Francois LABASTIE on 06/05/2020.
//  Copyright © 2020 Francois LABASTIE. All rights reserved.
//

#include <stdio.h>
#include <stdlib.h>

void Permut(int *, int *);

int main(int argc, const char * argv[]) {
    int A, B;
    printf("Saisir la valeur de A : ");
    scanf("%d",&A);
    printf("Saisir la valeur de B : ");
    scanf("%d",&B);
    Permut(&A,&B);
    printf("A vaut %d\n", A);
    printf("B vaut %d\n", B);
    return 0;
}

void Permut(int* VAR1, int* VAR2)
{
    int tampon;
    tampon = *VAR1;
    *VAR1 = *VAR2;
    *VAR2 = tampon;
}
