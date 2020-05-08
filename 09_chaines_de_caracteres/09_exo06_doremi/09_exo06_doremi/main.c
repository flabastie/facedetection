//
//  main.c
//  09_exo06_doremi
//
//  Created by Francois LABASTIE on 08/05/2020.
//  Copyright © 2020 Francois LABASTIE. All rights reserved.
//

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(int argc, const char * argv[]) {
    
    enum Notes { Do=1, Re=2, Mi=3, Fa=4, Sol=5, La=6, Si=7};
    typedef enum Notes Notes;
    
    Notes Note1, Note2;
    Note1 = Mi;
    Note2 = Do;
    
    printf("La position de la note : %d\n", Note1);
    if(Note1==Note2)
        printf("Notes identiques\n");
    else
        printf("Notes différentes\n");
    
    return 0;
}
