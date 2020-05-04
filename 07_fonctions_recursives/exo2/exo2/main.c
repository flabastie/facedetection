//
//  main.c
//  exo2
//
//  Created by Francois LABASTIE on 04/05/2020.
//  Copyright © 2020 Francois LABASTIE. All rights reserved.
//

#include <stdio.h>
#include <stdlib.h>

int Facto(int);

int main(int argc, const char * argv[]) {
    // insert code here...
    int x;
    printf("Saisir un entier: ");
    scanf("%d",&x);
    printf("Factorielle de %d = %d\n", x, Facto(x));
    return 0;
}

int Facto(int x)
{
    return x>1? x*Facto(x-1) : 1;
}
