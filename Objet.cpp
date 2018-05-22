//
// Created by quentin on 5/15/18.
//

#include <iostream>
#include <string>

#include "Objet.h"
#include "Pokemon.h"

using namespace std;

Objet::Objet() {

}

Objet::Objet(int _id, string _nom, string _desc, int _restaurPV) {

    typeId = _id;
    nom = _nom;
    desc = _desc;
    restaurPV = _restaurPV;
}

void Objet::Action(Pokemon& poke)
{
    switch (typeId) {
        case 1: poke.RecupPv(restaurPV);
                break;
    }
}

void Objet::Afficher()
{
    for (int i=0; i<10; i++) cout << "* ";
    cout << "Nom de l'objet: " << nom << endl;
    cout << "Description: " << desc << endl;
    cout << "Restauration des PV: " << restaurPV << endl;
    for (int i=0; i<10; i++) cout << "* ";
}