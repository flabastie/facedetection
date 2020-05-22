//
//  main.cpp
//  12_exo08_tableau2D
//
//  Created by Francois LABASTIE on 22/05/2020.
//  Copyright © 2020 Francois LABASTIE. All rights reserved.
//

#include <iostream>
#include <cstdlib>
#include <cstdio>
using namespace std;


int main(int argc, const char * argv[]) {
    float somme = 0;
    int j;
    int T[2][3] = {
        {2,6,16},
        {6,15,45}
    };
    for(j=0; j<3; j++)
        somme += T[1][j];
    
    somme /=3.0;
    cout << "Poids moyen : " << somme << endl;
    
    return 0;
}
