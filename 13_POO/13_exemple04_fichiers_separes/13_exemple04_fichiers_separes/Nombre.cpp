//
//  Nombre.cpp
//  13_exemple04_fichiers_separes
//
//  Created by Francois LABASTIE on 23/05/2020.
//  Copyright © 2020 Francois LABASTIE. All rights reserved.
//

#include <stdio.h>
#include "Nombre.h"

//implémentation du constructeur
Nombre::Nombre(int n): num(n) {}

//implémentation du getter
int Nombre::GetNombre()
{
    return num;
}
