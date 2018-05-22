//
// Created by quentin on 5/14/18.
//
#include <iostream>
#include <string>

#include "AttaquePhysique.h"
#include "Pokemon.h"

using namespace std;

AttaquePhysique::AttaquePhysique(string _nom, string _type, double _precision, int _puissance, int _pp) : Attaque(nom, type, precision, puissance, pp) {
    // Constructeur classe-mère
}

int AttaquePhysique::CalculerDegat(Pokemon cible, int nivAttaquant, string typeAttaquant, int attPhyAttaquant) {
    double stab = 1;

    if (typeAttaquant == type) {
        stab = 1.5;
    }
    double cm = precision * stab;

    return (((nivAttaquant*0.4+2)*attPhyAttaquant*puissance)/(cible.GetDefPhy()*50)+2)*cm;
}

void AttaquePhysique::ChangePP() {
    pp -= 1;
}

int AttaquePhysique::GetPP() {
    return pp;
}

