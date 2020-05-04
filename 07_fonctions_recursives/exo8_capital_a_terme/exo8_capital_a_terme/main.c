//
//  main.c
//  exo8_capital_a_terme
//
//  Created by Francois LABASTIE on 04/05/2020.
//  Copyright © 2020 Francois LABASTIE. All rights reserved.
//

#include <stdio.h>
#include <stdlib.h>

float capital_a_terme(float, float, int);

int main(int argc, const char * argv[]) {
    //
    float taux, c;
    int nbr_annees;
    printf("Saisir le capital initial : ");
    scanf("%f",&c);
    printf("Saisir le taux : ");
    scanf("%f",&taux);
    printf("Saisir le nombre d'années : ");
    scanf("%d",&nbr_annees);
    printf("Valeur du capital après %.2f années = %.2f\n", c, capital_a_terme(c, taux, nbr_annees));
    return 0;
}

float capital_a_terme(float c, float taux, int nbr_annees)
{
    if(nbr_annees == 0)
        return c;
    else
        return capital_a_terme((c+c*taux/100), taux, nbr_annees-1);
}
