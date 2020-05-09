//
//  main.c
//  09_exo12_tab_billets_train
//
//  Created by Francois LABASTIE on 09/05/2020.
//  Copyright © 2020 Francois LABASTIE. All rights reserved.
//

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct BilletDeTrain BilletDeTrain;
struct BilletDeTrain{
    int num_billet;
    float prix_billet;
    int num_train;
    int num_voiture;
    int num_place;
    char gare_depart[20];
    char jour_depart[20];
    char heure_depart[10];
    char gare_arrivee[20];
    char jour_arrivee[20];
    char heure_arrivee[10];
    int duree;
};

void dureeVoyage(char*, char*);
void prixLePlusHaut(BilletDeTrain tab[]);

int main(int argc, const char * argv[]) {

    BilletDeTrain tab[3];
    int i;
    
    for(i=0; i<3; i++)
    {
        printf("Billet %d : \n",i+1);
        printf("---------\n");
        printf("Numéro de billet : ");
        scanf("%d",&tab[i].num_billet);
        printf("Prix du billet : ");
        scanf("%f",&tab[i].prix_billet);
        printf("Numéro de train : ");
        scanf("%d",&tab[i].num_train);
        printf("Numéro de voiture : ");
        scanf("%d",&tab[i].num_voiture);
        printf("Numéro de place : ");
        scanf("%d",&tab[i].num_place);
        printf("Gare de départ : ");
        scanf("%s",&tab[i].gare_depart);
        printf("Jour de départ : ");
        scanf("%s",&tab[i].jour_depart);
        printf("Heure de départ - format xxhxx - : ");
        scanf("%s",&tab[i].heure_depart);
        printf("Gare d'arrivée : ");
        scanf("%s",&tab[i].gare_arrivee);
        printf("Jour d'arrivée : ");
        scanf("%s",&tab[i].jour_arrivee);
        printf("Heure d'arrivée - format xxhxx - : ");
        scanf("%s",&tab[i].heure_arrivee);
    }
    
    for(i=0; i<3; i++)
    {
        printf("\nVotre voyage %d : \n", i+1);
        printf("Numéro billet : %d\t", tab[i].num_billet);
        printf("\nPrix billet : %.2f\t", tab[i].prix_billet);
        printf("\nTrain : %d , voiture : %d , place : %d",
               tab[i].num_train, tab[i].num_voiture, tab[i].num_place);
        printf("\nDépart : %s, le %s, à %s heure",
               tab[i].gare_depart, tab[i].jour_depart, tab[i].heure_depart);
        printf("\nArrivée : %s, le %s, à %s heure\n",
               tab[i].gare_arrivee, tab[i].jour_arrivee, tab[i].heure_arrivee);
        dureeVoyage(tab[i].heure_depart, tab[i].heure_arrivee);
    }
    prixLePlusHaut(tab);
    return 0;
}

void dureeVoyage(char * stringdep, char * stringarr)
{
    char H1=stringdep[0]; char h1=stringdep[1];
    char H2=stringarr[0]; char h2=stringarr[1];
    char M1=stringdep[3]; char m1=stringdep[4];
    char M2=stringarr[3]; char m2=stringarr[4];
    // on obtiend les heures et minutes de dèpart H1h1M1m1
    int C=H1-48; int c=h1-48; int E=M1-48; int e=m1-48;
    // heure arrivée
    int D=H2-48; int d=h2-48; int F=M2-48; int f=m2-48;
    int resMin, tempsH, tempsMin;
    
    if((10*H1+h1)>(10*H2+h2))
    {
        resMin = (((23-(10*C+c))*60)+(60-(10*E+e))+(D*600+d*60+F*10+f));
        tempsH = resMin/60;
        tempsMin = resMin%60;
        printf("Le temps de trajet est de : %d heure(s) %d min\n", tempsH, tempsMin);
    }
    else
    {
        resMin = ((D*600+d*60+F*10+f)-(C*600+c*60+E*10+e));
        tempsH = resMin/60;
        tempsMin = resMin%60;
        printf("Le temps de trajet est de : %d heure(s) %d min\n", tempsH, tempsMin);
    }
    
}

void prixLePlusHaut(BilletDeTrain tab[])
{
    float prixHaut = tab[0].prix_billet;
    int cpt=0;
    int i;
    for(i=1; i<3; i++)
    {
        if(tab[0].prix_billet > prixHaut)
        {
            prixHaut = tab[0].prix_billet;
            cpt=i;
        }
    }
    printf("\nBillet le plus cher = %.2f \n(Voyage entre %s et %s)\n",
           prixHaut, tab[cpt].gare_depart, tab[cpt].gare_arrivee);
}

