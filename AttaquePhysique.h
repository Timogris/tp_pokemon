//
// Created by quentin on 5/14/18.
//

#ifndef PROJETCPP_ATTAQUEPHYSIQUE_H
#define PROJETCPP_ATTAQUEPHYSIQUE_H

#include <iostream>
#include <string>

#include "Attaque.h"

class Pokemon;

class AttaquePhysique : public Attaque {
public:
    AttaquePhysique(std::string _nom, std::string _type, double _precision, int _puissance, int _pp);
    int virtual CalculerDegat(Pokemon cible, int nivAttaquant, std::string typeAttaquant, int attPhyAttaquant);
    void ChangePP();
    int GetPP();
};


#endif //PROJETCPP_ATTAQUEPHYSIQUE_H
