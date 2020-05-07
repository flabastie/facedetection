//
//  main.c
//  exemple1
//
//  Created by Francois LABASTIE on 06/05/2020.
//  Copyright © 2020 Francois LABASTIE. All rights reserved.
//

#include <stdio.h>
#include <stdlib.h>

int Somme(int VAR1, int VAR2)
{
    return (VAR1 + VAR2);
}

int main(int argc, const char * argv[]) {
    int a, b;
    printf("Saisir la valeur de a : ");
    scanf("%d",&a);
    printf("Saisir la valeur de b : ");
    scanf("%d",&b);
    printf("Somme de %d + %d = %d\n", a, b, Somme(a,b));
    return 0;
}
