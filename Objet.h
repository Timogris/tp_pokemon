//
// Created by quentin on 5/15/18.
//

#ifndef PROJETCPP_OBJET_H
#define PROJETCPP_OBJET_H

#include <iostream>
#include <string>

class Pokemon;

class Objet {
private:
    int typeId;
    std::string nom;
    std::string desc;
    int restaurPV;
public:
    Objet();
    Objet(int _id, std::string _nom, std::string _desc, int _restaurPV);

    void Action(Pokemon& poke);
    void Afficher();

};


#endif //PROJETCPP_OBJET_H
