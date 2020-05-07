//
//  main.c
//  exo01_pointeur
//
//  Created by Francois LABASTIE on 07/05/2020.
//  Copyright © 2020 Francois LABASTIE. All rights reserved.
//

#include <stdio.h>
#include <stdlib.h>

int main(int argc, const char * argv[]) {
    
    int a = 44;
    int* p = NULL;
    p = &a;
    
    printf("Contenu de a = %d\n", a);
    
    // printf("Adresse de a = %ld\n", &a);
    printf("Adresse de a = %p\n", &a);
    
    // printf("Contenu du pointeur p = %ld\n", p);
    printf("Contenu du pointeur p = %p\n", p);
    
    // printf("Adresse du pointeur p = %ld\n", &p);
    printf("Adresse du pointeur p = %p\n", &p);
    
    printf("Contenu pointé par p = %d\n", *p);
    return 0;
}
