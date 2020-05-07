//
//  main.c
//  exo10_min_max
//
//  Created by Francois LABASTIE on 07/05/2020.
//  Copyright © 2020 Francois LABASTIE. All rights reserved.
//

#include <stdio.h>
#include <stdlib.h>

void MinMax(float*, int, float*, float*);

int main(int argc, const char * argv[]) {
    int i;
    float min, max;
    float tab[5];
    for(i=0; i<5; i++)
    {
        printf("Saisir le réel %d : ",i+1);
        scanf("%f",&tab[i]);
    }
    MinMax(tab, 5, &min, &max);
    printf("Min = %.2f : \n",min);
    printf("Max = %.2f : \n",max);
    
    return 0;
}

void MinMax(float* tab, int taille, float* min, float* max)
{
    int i;
    *min = *max = tab[0];
    for(i=0; i<taille; i++)
    {
        if(tab[i]<*min)
            *min = tab[i];
        if(tab[i]>*max)
            *max = tab[i];
    }
}
