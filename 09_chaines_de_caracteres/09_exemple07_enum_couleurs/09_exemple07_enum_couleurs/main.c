//
//  main.c
//  09_exemple07_enum_couleurs
//
//  Created by Francois LABASTIE on 08/05/2020.
//  Copyright © 2020 Francois LABASTIE. All rights reserved.
//

#include <stdio.h>
#include <stdlib.h>

int main(int argc, const char * argv[]) {
    enum Couleurs {Vert='A', Blanc='B', Rouge='C'};
    enum Couleurs Color1 = Rouge;
    
    printf("Numéro de couleur : %c\n", Color1);
    return 0;
}
