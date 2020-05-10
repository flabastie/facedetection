//
//  main.c
//  10_exemple06_fichier_binaire
//
//  Created by Francois LABASTIE on 10/05/2020.
//  Copyright © 2020 Francois LABASTIE. All rights reserved.
//

#include <stdio.h>

void EcritBin ()
{
    FILE * Fic;
    int a = 10; double b = 3.14;
    printf("Écriture du fichier binaire\n");
    Fic = fopen("Essai.bin","wb");
    fwrite(&a, sizeof(int),1,Fic);
    fwrite(&b, sizeof(double),1,Fic);
    fclose(Fic);
}

void LitBin() {
    int a;
    double b;
    FILE* Fic;
    printf("Lecture du fichier binaire\n");
    Fic = fopen("Essai.bin","rb");
    fread(&a, sizeof(int),1,Fic);
    fread(&b, sizeof(double),1,Fic);
    printf("a : %d \t b : %lf \n", a, b);
    fclose(Fic);
}

int main(int argc, const char * argv[]) {
    EcritBin () ;
    LitBin();
    return 0;
}
