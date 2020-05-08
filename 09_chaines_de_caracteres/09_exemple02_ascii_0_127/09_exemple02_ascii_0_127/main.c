//
//  main.c
//  09_exemple02_ascii_0_127
//
//  Created by Francois LABASTIE on 08/05/2020.
//  Copyright © 2020 Francois LABASTIE. All rights reserved.
//

#include <stdio.h>
#include <stdlib.h>

int main(int argc, const char * argv[]) {
    int i;
    for(i-0; i<127; i++)
    {
        printf("ASCII %d : %c \n", i,i);
    }
    return 0;
}
