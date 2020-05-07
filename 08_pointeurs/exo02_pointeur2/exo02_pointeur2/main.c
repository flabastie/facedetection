//
//  main.c
//  exo02_pointeur2
//
//  Created by Francois LABASTIE on 07/05/2020.
//  Copyright © 2020 Francois LABASTIE. All rights reserved.
//

#include <stdio.h>
#include <stdlib.h>

int main(int argc, const char * argv[]) {
    // insert code here...
    int a = 44;
    int b;
    // pointeur p qui a en mémoire l'adresse de a
    int* p = &a;
    // contenu stocké à l'adresse pointée par p est stocké dans b
    b = *p;
    printf("Contenu de b = %d\n", b);
    return 0;
}
