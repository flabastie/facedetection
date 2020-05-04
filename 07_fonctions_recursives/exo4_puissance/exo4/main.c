//
//  main.c
//  exo4
//
//  Created by Francois LABASTIE on 04/05/2020.
//  Copyright © 2020 Francois LABASTIE. All rights reserved.
//

#include <stdio.h>
#include <stdlib.h>

int Puissance(int, int);

int main(int argc, const char * argv[]) {
    int x, n;
    printf("Saisir un entier x:");
    scanf("%d",&x);
    printf("Saisir un entier n:");
    scanf("%d",&n);
    printf("%d puissance %d = %d\n", x,n,Puissance(x,n));
    return 0;
}

int Puissance(int x, int n){
    if(n==0)
        return 1;
    else
        return (x * Puissance(x, n-1));
}
