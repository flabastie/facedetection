//
//  main.c
//  09_exemple06_structure
//
//  Created by Francois LABASTIE on 08/05/2020.
//  Copyright © 2020 Francois LABASTIE. All rights reserved.
//

#include <stdio.h>
#include <stdlib.h>

int main(int argc, const char * argv[]) {
    // structure Date
    struct Date {
        int jour;
        int mois;
        int annee;
    };
    // déclaration de variable date1
    struct Date date1;
    
    printf("Saisir le jour : ");
    scanf("%d",&date1.jour);
    printf("Saisir le mois : ");
    scanf("%d",&date1.mois);
    printf("Saisir l'année : ");
    scanf("%d",&date1.annee);
    
    printf("Votre jour est : %d/%d/%d\n", date1.jour, date1.mois, date1.annee);
    return 0;
}
