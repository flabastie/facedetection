//
//  main.c
//  exo7_ieme_nbr_pair
//
//  Created by Francois LABASTIE on 04/05/2020.
//  Copyright © 2020 Francois LABASTIE. All rights reserved.
//

#include <stdio.h>
#include <stdlib.h>

int n_iemeNbPair(int);

int main(int argc, const char * argv[]) {
    //
    int n;
    printf("Saisir un entier n: ");
    scanf("%d",&n);
    printf("Le %d ième nombre pair est %d \n", n, n_iemeNbPair(n));
    return 0;
}

int n_iemeNbPair(int n)
{
    if (n==1)
        return 0;
    else
        return (2+ n_iemeNbPair(n-1));
}
