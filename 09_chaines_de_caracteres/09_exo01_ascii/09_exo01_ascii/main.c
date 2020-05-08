//
//  main.c
//  09_exo01_ascii
//
//  Created by Francois LABASTIE on 08/05/2020.
//  Copyright © 2020 Francois LABASTIE. All rights reserved.
//

#include <stdio.h>
#include <stdlib.h>

int main(int argc, const char * argv[]) {
    char a;
    printf("Saisir une lettre : ");
    scanf("%c",&a);
    printf("Vous avez saisi : %c\n", a);
    printf("Son code ASCII est : %d\n", a);
    return 0;
}
