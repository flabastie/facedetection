//
//  main.c
//  exo5_suiteU
//
//  Created by Francois LABASTIE on 04/05/2020.
//  Copyright © 2020 Francois LABASTIE. All rights reserved.
//

#include <stdio.h>

int SuiteU(int);

int main(int argc, const char * argv[]) {
    //
    int n;
    printf("Saisir un entier n: ");
    scanf("%d",&n);
    printf("La valeur de la suite U%d = %d\n", n, SuiteU(n));
    return 0;
}

int SuiteU(int n)
{
    if(n==1)
        return 1;
    else
        return (2*SuiteU(n-1) + 3);
}
