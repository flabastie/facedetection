//
//  main.c
//  exo03_pointeur3
//
//  Created by Francois LABASTIE on 07/05/2020.
//  Copyright © 2020 Francois LABASTIE. All rights reserved.
//

#include <stdio.h>
#include <stdlib.h>

int main(int argc, const char * argv[]) {
    //
    int a = 44;
    int * P = NULL;
    
    P = &a;
    a = 45;
    
    printf("Le contenu de a vaut maintenant : %d\n", *P);
    return 0;
}
