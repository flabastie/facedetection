//
//  main.c
//  exo6_somme
//
//  Created by Francois LABASTIE on 04/05/2020.
//  Copyright © 2020 Francois LABASTIE. All rights reserved.
//

#include <stdio.h>
#include <stdlib.h>

int SommeEntiers(int);

int main(int argc, const char * argv[]) {
    // insert code here...
    int n;
    printf("Saisir un entier n: ");
    scanf("%d",&n);
    printf("La somme des %d premiers entiers = %d\n", n, SommeEntiers(n));
    return 0;
}

int SommeEntiers(int n)
{
    if(n==0)
        return 0;
    else
        return ((n-1) + SommeEntiers(n-1));
}
