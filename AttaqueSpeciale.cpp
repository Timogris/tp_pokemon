//
// Created by quentin on 5/14/18.
//
#include <iostream>
#include <string>

#include "AttaqueSpeciale.h"
#include "Pokemon.h"

using namespace std;

AttaqueSpeciale::AttaqueSpeciale(string _nom, string _type, double _precision, int _puissance, int _pp) : Attaque(nom, type, precision, puissance, pp) {
    // Constructeur classe-mère
}

int AttaqueSpeciale::CalculerDegat(Pokemon cible, int niveauAttaquant, string typeAttaquant, int attSpeAttaquant) {

    double stab = 1;

    if (typeAttaquant == type) {
        stab = 1.5;
    }
    double cm = precision * stab;


    return (((niveauAttaquant*0.4+2)*attSpeAttaquant*puissance)/(cible.GetDefSpe()*50)+2)*cm;
}

string AttaqueSpeciale::getNom() {
    return nom;
}

int AttaqueSpeciale::GetPP() {
    return pp;
}