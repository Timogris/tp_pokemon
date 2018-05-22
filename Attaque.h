//
// Created by quentin on 5/14/18.
//

#ifndef PROJETCPP_ATTAQUE_H
#define PROJETCPP_ATTAQUE_H

#include <iostream>
#include <string>

class Attaque {
protected:
    std::string nom;
    std::string type;
    double precision;
    int puissance;
    int pp;
public:
    Attaque();
    Attaque(std::string _nom, std::string _type, double _precision, int _puissance, int _pp);
};


#endif //PROJETCPP_ATTAQUE_H
