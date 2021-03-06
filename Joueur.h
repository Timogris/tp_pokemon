#ifndef DEF_JOUEUR
#define DEF_JOUEUR

#include <iostream>
#include <string>

class Joueur {
 private:
  std::string nom;
  int argent;
  Pokemon pokemon;
 public:
  Joueur(std::string _nom, int _argent, Pokemon _pokemon);
  int GetArgent();
  string GetPokemon();
  void SetPokemon(Pokemon _pokemon);

}

#endif DEF_JOUEUR
