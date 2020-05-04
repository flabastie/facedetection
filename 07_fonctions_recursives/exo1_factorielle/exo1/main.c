//
//  main.c
//  exo1
//
//  Created by Francois LABASTIE on 04/05/2020.
//  Copyright © 2020 Francois LABASTIE. All rights reserved.
//

#include <stdio.h>
#include <stdlib.h>

int Facto(int);

int main(int argc, const char * argv[]) {
    int x;
    printf("Saisir un entier: ");
    scanf("%d",&x);
    printf("Factorielle de %d = %d\n",x, Facto(x));
    return 0;
}

int Facto(int x)
{
    if(x > 1)
        return (x * Facto(x-1));
    else
        return 1;
}
