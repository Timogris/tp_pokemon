#ifndef DEF_POKEMON
#define DEF_POKEMON

#include <iostream>
#include <string>
#include <vector>

#include "Objet.h"

class AttaquePhysique;
class AttaqueSpeciale;

class Pokemon {
 private:
  std::string nom;
  int prix;
  std::string type;
  int pv; // les points de vie
    int pvMax;
  int niveau;
  int attPhy;
  int attSpe;
  int defPhy;
  int defSpe;
  int attaque;
  int vitesse;
  Objet objet;
  std::vector<AttaquePhysique*> listAttPhy;
  std::vector<AttaqueSpeciale*> listAttSpe;
  bool etat;

 public:
  Pokemon(std::string _nom, int _prix, std::string _type, int _pv, int _niveau, int _attPhy, int _attSpe, int _defPhy, int _defSpe, int _attaque, int _vitesse, Objet _objet);
  void AttaquerPhysique(Pokemon cible, AttaquePhysique& attaque);
  void AttaquerSpeciale(Pokemon cible, AttaqueSpeciale& attaque);
  void Afficher();
  void UtiliserObjet();
  std::string GetType();
  int GetNiveau();
  int GetAttPhy();
  int GetAttSpe();
  int GetDefPhy();
  int GetDefSpe();
  int GetVitesse();
  int GetPv();
  int GetPvMax();
  std::string GetObjet();
  void RecupPv(int pvRendu);
  void SetObjet(Objet nouvelObjet);
  void SetAttPhy(AttaquePhysique* attaque);
  void SetAttSpe(AttaqueSpeciale* attaque);
};

#endif
