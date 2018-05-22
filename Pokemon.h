#ifndef DEF_POKEMON
#define DEF_POKEMON

#include <iostream>
#include <string>

class Pokemon {
 private:
  int id;
  std::string nom;
  int prix;
  std::string type;
  int pvMax;
  int pv; // les points de vie
  int niveau;
  int attPhy;
  int attSpe;
  int defPhy;
  int defSpe;
  int attaque;
  int vitesse;
  Objet objet;
  bool etat;

 public:
  Pokemon(int id, std::string _nom, int _prix, std::string _type, int _pv, int _niveau, int _attPhy, int _attSpe, int _defPhy, int _defSpe, int _attaque, int _vitesse, std::string _objet);
  void Attaquer(int cible, int attaque);
  void Afficher();
  void UtiliserObjet();
  id GetId();
  std::string GetNom();
  std::string GetType();
  int GetPvMax();
  int GetPv();
  int GetNiveau();
  int GetAttPhy();
  int GetAttSpe();
  int GetDefPhy();
  int GetDefSpe();
  int GetVitesse();
  int GetPrix();
  void SetObjet(Objet nouvelObjet);
  void RecupPv(int pv);
};

#endif
