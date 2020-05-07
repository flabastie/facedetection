//
//  main.c
//  exo08_maFonction
//
//  Created by Francois LABASTIE on 07/05/2020.
//  Copyright © 2020 Francois LABASTIE. All rights reserved.
//

#include <stdio.h>
#include <stdlib.h>

void maFonction(int*);

int main(int argc, const char * argv[]) {
    //
    int x = 10;
    
    printf("L'adresse de x est %p\n", &x);
    printf("Contenu de x avant l'appel de la fonction: %d\n", x);
    maFonction(&x);
    printf("Valeur de x dans le main après l'appel de fonction : %d\n", x);
    printf("L'adresse de x après l'appel de fonction : %p\n", &x);
    
    return 0;
}

void maFonction(int* x)
{
    printf("Valeur contenue à l'adresse où pointe P2 avant modif dans la fonction : %d\n", *x);
    *x = 5;
    printf("Valeur contenue à l'adresse où pointe P2 après modif dans la fonction : %d\n", *x);
}
