//
//  main.c
//  exo14_fibonacci_iterative
//
//  Created by Francois LABASTIE on 05/05/2020.
//  Copyright © 2020 Francois LABASTIE. All rights reserved.
//

#include <stdio.h>
#include <stdlib.h>

long FibonacciIter(long);

int main(int argc, const char * argv[]) {
    int n;
    printf("Saisir un nombre de mois: ");
    scanf("%d",&n);
    printf("Nombre de lapins au bout de %d mois: %ld\n", n, FibonacciIter(n));
    return 0;
}

long FibonacciIter(long n)
{
    long Primo = 0;
    long Secondo = 1;
    long Tampon;
    int i;
    // if(n==0 || n==1)
    //    return n;
    // else
    //    return (Fibonacci(n-1) + Fibonacci(n-2));
    for (i=1; i<=n; i++)
    {
        Tampon = Primo + Secondo;
        Primo = Secondo;
        Secondo = Tampon;
    }
    return Primo;
}
