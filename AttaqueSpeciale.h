//
// Created by quentin on 5/14/18.
//

#ifndef PROJETCPP_ATTAQUESPECIALE_H
#define PROJETCPP_ATTAQUESPECIALE_H

#include <iostream>
#include <string>

#include "Attaque.h"
class Pokemon;

class AttaqueSpeciale : public Attaque {
public:
    AttaqueSpeciale(std::string _nom, std::string _type, double _precision, int _puissance, int _pp);
    int virtual CalculerDegat(Pokemon cible, int nivAttaquant, std::string typeAttaquant, int attSpeAttaquant);
    std::string getNom();
    int GetPP();
};


#endif //PROJETCPP_ATTAQUESPECIALE_H
