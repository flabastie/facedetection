//
//  main.c
//  04_pointeur4
//
//  Created by Francois LABASTIE on 07/05/2020.
//  Copyright © 2020 Francois LABASTIE. All rights reserved.
//

#include <stdio.h>
#include <stdlib.h>



int main(int argc, const char * argv[]) {
    //
    int a = 44;
    int b;
    int *P = NULL;
    
    P=&a;
    a=45;
    *P=46;
    
    printf("Le contenu de a vaut maintenant : %d\n", a);
    return 0;
}
