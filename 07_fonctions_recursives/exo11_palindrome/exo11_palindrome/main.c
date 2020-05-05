//
//  main.c
//  exo11_palindrome
//
//  Created by Francois LABASTIE on 05/05/2020.
//  Copyright © 2020 Francois LABASTIE. All rights reserved.
//

#include <stdio.h>
#include <stdlib.h>

void AfficheTab(int*, int, int);
int EstPalindrome(int tab[], int indice, int n);

int main(int argc, const char * argv[]) {
    int n, i;
    int * tab;
    int indice = 0;
    printf("Saisir le nombre d'éléments du tableau: ");
    scanf("%d",&n);
    tab = malloc(sizeof(int)*n);
    for(i=0; i<n; i++)
    {
        printf("Saisir l'éléments %d du tableau: ", i);
        scanf("%d",&tab[i]);
    }
    AfficheTab(tab, indice, n);
    if(EstPalindrome(tab, indice, n))
        printf("\nTableau Palindrome\n");
    else
        printf("\nTableau NON Palindrome\n");

    return 0;
}

void AfficheTab(int tab[], int indice, int n)
{
    if(indice==n-1)
        printf("%d\n",tab[n-1]);
    else
    {
        printf("%d\n",tab[indice]);
        AfficheTab(tab, indice+1, n);
    }
}

int EstPalindrome(int tab[], int indice, int n)
{
    if (tab[indice]!=tab[n-1-indice])
        return 0;
    if (indice >= n/2)
        return 1;
    return EstPalindrome(tab, indice+1, n);
}

