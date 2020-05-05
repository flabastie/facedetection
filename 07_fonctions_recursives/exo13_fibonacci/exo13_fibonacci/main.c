//
//  main.c
//  exo13_fibonacci
//
//  Created by Francois LABASTIE on 05/05/2020.
//  Copyright © 2020 Francois LABASTIE. All rights reserved.
//

#include <stdio.h>
#include <stdlib.h>

long Fibonacci(long);

int main(int argc, const char * argv[]) {
    // insert code here...
    int n;
    printf("Saisir un nombre de mois: ");
    scanf("%d",&n);
    printf("Nombre de lapins au bout de %d mois: %ld\n", n, Fibonacci(n));
    return 0;
}

long Fibonacci(long n)
{
    if(n==0 || n==1)
        return n;
    else
        return (Fibonacci(n-1) + Fibonacci(n-2));
}
