//
//  main.c
//  11_exo09_concat_listes
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
    Maillon * maListe1;
    maListe1 = NULL;
    Maillon * maListe2;
    maListe2 = NULL;
    Maillon *Pcopie;
    Pcopie = NULL;
    int NbVal;
    
    // saisie de la liste 1
    printf("Combien d'articles dans la liste 1 ? ");
    scanf("%d",&NbVal);
    maListe1 = Insere(maListe1,NbVal);
    
    printf("Affichage des articles de la liste 1 \n");
    Affiche(maListe1);
    
    // saisie de la liste 2
    printf("Combien d'articles dans la liste 2 ? ");
    scanf("%d",&NbVal);
    maListe2 = Insere(maListe2,NbVal);
    
    printf("Affichage des articles de la liste 2 \n");
    Affiche(maListe2);
    
    // concaténation des listes
    Pcopie = maListe1;
    while(Pcopie->suivant != NULL)
    {
        Pcopie = Pcopie->suivant;
    }
    Pcopie->suivant = maListe2;
    
    // Affichage des listes concaténées
    printf("Affichage des listes concaténées\n");
    Affiche(maListe1);
    
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
