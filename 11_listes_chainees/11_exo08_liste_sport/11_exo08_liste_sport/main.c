//
//  main.c
//  11_exo08_liste_sport
//
//  Created by Francois LABASTIE on 21/05/2020.
//  Copyright © 2020 Francois LABASTIE. All rights reserved.
//

#include <stdio.h>
#include <stdlib.h>

typedef struct Article Article;
struct Article{
    char Code[5];
    char Libelle[10];
    float TauxTVA;
    float PrixHT;
};

typedef struct Maillon Maillon;
struct Maillon{
    Article valeur;
    Maillon * suivant;
};

Maillon * Insere(Maillon *, int);
void Affiche(Maillon *);

int main(int argc, const char * argv[]) {
    Maillon * maListe;
    maListe = NULL;
    int NbVal;
    
    printf("Combien d'articles ? ");
    scanf("%d",&NbVal);
    
    maListe = Insere(maListe,NbVal);
    Affiche(maListe);
    return 0;
}

void Affiche(Maillon * liste)
{
    if(liste == NULL)
    {
        printf("Fin de liste\n");
        return;
    }
    else {
        printf("\nArticle : \n");
        printf("%s \n",liste->valeur.Code);
        printf("%s \n",liste->valeur.Libelle);
        printf("%.2f \n",liste->valeur.TauxTVA);
        printf("%.2f \n",liste->valeur.PrixHT);
        Affiche(liste->suivant);
        return;
    }
}

Maillon * Insere(Maillon * liste, int Nb)
{
    Maillon * element = malloc(sizeof(*element));
    element->suivant = NULL;
    char buffer;
    
    if(Nb == 0)
        return liste;
    
    if(liste == NULL)
    {
        printf("Saisir le code : ");
        scanf("%s",&element->valeur.Code);
        scanf("%c",&buffer);
        printf("Saisir le libellé : ");
        scanf("%s",&element->valeur.Libelle);
        scanf("%c",&buffer);
        printf("Saisir le taux de TVA : ");
        scanf("%f",&element->valeur.TauxTVA);
        printf("Saisir le prix HT : ");
        scanf("%f",&element->valeur.PrixHT);
        
        element->suivant = NULL;
        liste = element;
        liste = Insere(liste, --Nb);
        return liste;
    }
    else {
        printf("Saisir le code : ");
        scanf("%s",&element->valeur.Code);
        scanf("%c",&buffer);
        printf("Saisir le libellé : ");
        scanf("%s",&element->valeur.Libelle);
        scanf("%c",&buffer);
        printf("Saisir le taux de TVA : ");
        scanf("%f",&element->valeur.TauxTVA);
        printf("Saisir le prix HT : ");
        scanf("%f",&element->valeur.PrixHT);
        
        element->suivant = liste;
        liste = element;
        liste = Insere(liste,--Nb);
        return liste;
    }
    
}


