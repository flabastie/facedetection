//
//  main.c
//  10_exo09_lecture_tab
//
//  Created by Francois LABASTIE on 11/05/2020.
//  Copyright © 2020 Francois LABASTIE. All rights reserved.
//

#include <stdio.h>
#include <stdlib.h>

int main(int argc, const char * argv[]) {
    int i, T[5];
    FILE* fic = NULL;
    
    fic = fopen("File.txt", "r");
    if(fic != NULL)
    {
        for(i=0; i<5; i++)
            fscanf(fic, "%d", &T[i]);
        fclose(fic);
    }
    else
        printf("Ouverture impossible!\n");
    
    for(i=0; i<5; i++)
        printf("%d\n",T[i]);
    
    return 0;
}



