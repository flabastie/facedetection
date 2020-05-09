//
//  main.c
//  09_exo09_true_false
//
//  Created by Francois LABASTIE on 09/05/2020.
//  Copyright © 2020 Francois LABASTIE. All rights reserved.
//

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(int argc, const char * argv[]) {
    // typedef enum Boolean Boolean;
    enum Boolean {
        true = 1,
        false = 0
    };
    enum Boolean Var1;
    Var1 = true;
    
    if(Var1 == true)
        printf("Valeur de votre variable : %d\n", Var1);
    else
        printf("Valeur de votre variable : %d\n", Var1);
    return 0;
}
