//
//  main.c
//  10_exemple07_fichier_binaire_tab
//
//  Created by Francois LABASTIE on 10/05/2020.
//  Copyright © 2020 Francois LABASTIE. All rights reserved.
//

# define MAX 20
# include <stdio.h>

int main(int argc, const char * argv[])
{
    int i ;
    double T1[MAX],T2[MAX];
    FILE *fic;
    for(i=0;i<MAX;i++)
        T1[i]=i*0.2;
    
    // Ecriture dans le fichier binaire
    fic = fopen("Toto.bin","wb");
    if (fic != NULL)
    {
        fwrite(T1, sizeof(double), MAX, fic);
        fclose(fic);
    }
    else
        printf("Erreur\n ");
    
    // Lecture du fichier binaire
    fic = fopen("Toto.bin","rb");
    if (fic != NULL)
    {
        fread(T2, sizeof(double), MAX, fic);
        fclose(fic);
        // Affichage de T2
        for(i=0 ; i<MAX ; i++)
            printf("%f\n ",T2[i]);
    }
    else
        printf("Erreur de lecture\n ");
    
    return 0;
}

