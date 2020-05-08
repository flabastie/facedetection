//
//  main.c
//  09_exemple01_ascii
//
//  Created by Francois LABASTIE on 08/05/2020.
//  Copyright © 2020 Francois LABASTIE. All rights reserved.
//

#include <stdio.h>
#include <stdlib.h>

int main(int argc, const char * argv[]) {
    char VAR1 = 'A';
//    int VAR1 = 'A'; // possible
    printf("Lettre stockée : %c\n", VAR1);
    printf("Code ASCII associé à la lettre : %d\n", VAR1);
    return 0;
}
