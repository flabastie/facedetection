//
//  main.c
//  exo3
//
//  Created by Francois LABASTIE on 04/05/2020.
//  Copyright © 2020 Francois LABASTIE. All rights reserved.
//

#include <stdio.h>
#include <stdlib.h>

int Produit(int, int);

int main(int argc, const char * argv[]) {
    //
    int x, y;
    printf("Saisir un entier x :");
    scanf("%d",&x);
    printf("Saisir un entier y :");
    scanf("%d",&y);
    printf("Produit de %d par %d = %d\n", x, y, Produit(x,y));
    return 0;
}

int Produit(int x, int y)
{
    if(y==0)
        return 0;
    else
        return (x + Produit(x, y-1));
}
