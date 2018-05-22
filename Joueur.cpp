#include <iostream>
#include <string>

#include "Joueur.h"

using namespace std;

Joueur::Joueur(string _nom, int _argent, Pokemon _pokemon) {
  nom = _nom;
  argent = _argent;
  pokemon = _pokemon;
}

Joueur::GetArgent() {
  return argent;
};

Joueur::GetPokemon() {
  return pokemon.GetNom();
};

Joueur::SetPokemon(Pokemon _pokemon) {
  pokemon = _pokemon;
};
