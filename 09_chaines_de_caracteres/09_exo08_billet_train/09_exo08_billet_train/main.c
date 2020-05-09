//
//  main.c
//  09_exo08_billet_train
//
//  Created by Francois LABASTIE on 09/05/2020.
//  Copyright © 2020 Francois LABASTIE. All rights reserved.
//

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void dureeVoyage(char*, char*);

int main(int argc, const char * argv[]) {
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
    };
    BilletDeTrain billet1;
    
    printf("Saisir le numéro de billet : ");
    scanf("%d",&billet1.num_billet);
    printf("Saisir le prix du billet : ");
    scanf("%f",&billet1.prix_billet);
    printf("Saisir le numéro de train : ");
    scanf("%d",&billet1.num_train);
    printf("Saisir le numéro de voiture : ");
    scanf("%d",&billet1.num_voiture);
    printf("Saisir le numéro de place : ");
    scanf("%d",&billet1.num_place);
    printf("Saisir la gare de départ : ");
    scanf("%s",&billet1.gare_depart);
    printf("Saisir le jour de départ : ");
    scanf("%s",&billet1.jour_depart);
    printf("Saisir l'heure de départ - format xxhxx - : ");
    scanf("%s",&billet1.heure_depart);
    printf("Saisir la gare d'arrivée : ");
    scanf("%s",&billet1.gare_arrivee);
    printf("Saisir le jour d'arrivée : ");
    scanf("%s",&billet1.jour_arrivee);
    printf("Saisir l'heure d'arrivée - format xxhxx - : ");
    scanf("%s",&billet1.heure_arrivee);
    
    printf("\nVotre voyage : \n");
    printf("Billet numéro : %d\n", billet1.num_billet);
    printf("Prix billet : %.2f\n", billet1.prix_billet);
    printf("Train : %d , voiture : %d , place : %d\n", billet1.num_train, billet1.num_voiture, billet1.num_place);
    printf("Départ : %s, le %s, à %s heure\n", billet1.gare_depart, billet1.jour_depart, billet1.heure_depart);
    printf("Arrivée : %s, le %s, à %s heure\n", billet1.gare_arrivee, billet1.jour_arrivee, billet1.heure_arrivee);
    dureeVoyage(billet1.heure_depart, billet1.heure_arrivee);
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
