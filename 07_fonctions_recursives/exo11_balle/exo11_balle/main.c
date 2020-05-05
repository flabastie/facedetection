//
//  main.c
//  exo11_balle
//
//  Created by Francois LABASTIE on 05/05/2020.
//  Copyright © 2020 Francois LABASTIE. All rights reserved.
//

#include <stdio.h>
#include <stdlib.h>

float HauteurFinale(float, int);

int main(int argc, const char * argv[]) {
    // insert code here...
    float h;
    int nb;
    printf("Saisir la hauteur: ");
    scanf("%f",&h);
    printf("Saisir le nombre de rebonds: ");
    scanf("%d",&nb);
    printf("Hauteur finale = %.2f m \n", HauteurFinale(h, nb));
    return 0;
}

float HauteurFinale(float h, int nb)
{
    if(nb==0)
        return h;
    else
        return HauteurFinale(h/2.0, nb-1);
}
