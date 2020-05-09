//
//  main.c
//  09_exo14_nbr_lettres
//
//  Created by Francois LABASTIE on 09/05/2020.
//  Copyright © 2020 Francois LABASTIE. All rights reserved.
//

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int NbrVoyelles(char*);

int main(int argc, const char * argv[]) {
    char mot[20];
    printf("Saisir un mot : ");
    scanf("%s",&mot);
    printf("Mot avec lettres %d\n", strlen(mot));
    printf("Mot avec %d voyelles\n", NbrVoyelles(mot));
    
    return 0;
}

int NbrVoyelles(char* mot)
{
    int nbVoyelles = 0;
    int i;
    
    for(i=0; i<strlen(mot); i++)
    {
        if ((mot[i] == 'a') || (mot[i] == 'e') || (mot[i] == 'i')
            || (mot[i] == 'o') || (mot[i] == 'u'))
        {
            nbVoyelles++;
        }
    }
    return nbVoyelles;
}
