//
// Created by quentin on 5/14/18.
//
#include <iostream>
#include <string>
#include "Attaque.h"

using namespace std;

Attaque::Attaque()
{
    nom = "Aucun";
    type = "Aucun";
    precision = 0;
    puissance = 0;
    pp = 0;
}

Attaque::Attaque(string _nom, string _type, double _precision, int _puissance, int _pp)
{
    nom = _nom;
    type = _type;
    precision = _precision;
    puissance = _puissance;
    pp = _pp;
}
