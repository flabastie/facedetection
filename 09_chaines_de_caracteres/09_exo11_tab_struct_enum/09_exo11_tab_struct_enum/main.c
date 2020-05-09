//
//  main.c
//  09_exo11_tab_struct_enum
//
//  Created by Francois LABASTIE on 09/05/2020.
//  Copyright © 2020 Francois LABASTIE. All rights reserved.
//

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(int argc, const char * argv[]) {
    
    typedef enum Etat Etat;
    enum Etat {
        celibataire = 1,
        marie = 2,
        pacse = 3,
        divorse = 4,
    };
    typedef struct Date Date;
    struct Date {
        int jour;
        char mois[15];
        int annee;
    };
    typedef struct Individu Individu;
    struct Individu{
        char Nom[15];
        char Prenom[15];
        Date Date_naissance;
        Etat Situation;
    };
    
    Individu indiv1;
    int i;
    Individu tab[4];
    
    for(i=0; i<4; i++)
    {
        printf("Personne %d : \n", i+1);
        printf("------------\n");
        printf("Saisir le nom de la personne : ");
        scanf("%s", &tab[i].Nom);
        printf("Saisir le prénom : ");
        scanf("%s", &tab[i].Prenom);
        printf("Saisir le jour de naissance : ");
        scanf("%d", &tab[i].Date_naissance.jour);
        printf("Saisir le mois de naissance : ");
        scanf("%s", &tab[i].Date_naissance.mois);
        printf("Saisir l'année de naissance : ");
        scanf("%d", &tab[i].Date_naissance.annee);
        printf("Saisir la situation matrimoniale : \n");
        printf("celibataire (1), marie (2), pacse (3), divorse (4) : \n");
        scanf("%d", &tab[i].Situation);
        printf("\n");
    }
    
    for(i=0; i<4; i++)
    {
        printf("Personne %d : \n", i+1);
        printf("------------\n");
        printf("Nom : %s\n", tab[i].Nom);
        printf("Prénom : %s\n", tab[i].Prenom);
        printf("Date de naissance : %d/%s/%d\n",
               tab[i].Date_naissance.jour, tab[i].Date_naissance.mois, tab[i].Date_naissance.annee);
        switch (tab[i].Situation) {
            case 1:
                printf("Situation : Célibataire\n");
                break;
            case 2:
                printf("Situation : Marié\n");
                break;
            case 3:
                printf("Situation : Pacsé\n");
                break;
            case 4:
                printf("Situation : Divorsé\n");
                break;
            default:
                break;
        }
        printf("\n");
    }
    return 0;
}
