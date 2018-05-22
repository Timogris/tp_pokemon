#include "Pokemon.h"

using namespace std;

// Constructeur
Pokemon::Pokemon(string _nom, int _prix, string _type, int _pv, int _niveau, int _attPhy, int _attSpe, int _defPhy, int _defSpe, int _attaque, int _vitesse, string _objet) {

  nom = _nom;
  prix = _prix;
  type = _type;
  pvMax = _pv;
  pv = _pv;
  niveau = _niveau;
  attPhy = _attPhy;
  attSpe = _attSpe;
  defPhy = _defPhy;
  defSpe = _defSpe;
  attaque = _attaque;
  vitesse = _vitesse;
  objet = _objet;
  etat = true; 
  
};

void Pokemon::Attaquer(int cible, int attaque) {
};

void Pokemon::Afficher(){
  cout << nom << " lvl. " << niveau << endl;
  cout << "$" << prix << endl;
  cout << pv << "PV" << endl;
  cout << "ATT: " << attPhy << " ATTSPE: " << attSpe << endl;
  cout << "DEF: " << defPhy << " DEFSPE: " << defSpe << endl;
  cout << "VIT: " << vitesse << endl;
  cout << "NB DE CAPACITES: " << attaque << endl;
  cout << "BAIE TENUE: " << objet << endl; 
};

void Pokemon::UtiliserObjet(){
};

int Pokemon::GetId() {
  return id;
};

string Pokemon::GetNom() {
  return nom;
};

int Pokemon::GetPvMax() {
  return pvMax;
};
int Pokemon::GetPv() {
  return pv;
};

string Pokemon::GetType() {
  return type;
};

int Pokemon::GetNiveau() {
  return niveau;
};

int Pokemon::GetAttPhy() {
  return attPhy;
};

int Pokemon::GetAttSpe() {
  return attSpe;
};

int Pokemon::GetDefPhy() {
  return defPhy;
};

int Pokemon::GetDefSpe() {
  return defSpe;
};

int Pokemon::GetVitesse() {
  return vitesse;
};

void Pokemon::SetObjet(Objet objet) {
};

void Pokemon::RecupPv(int pvRendu) {
  pv += pvRendu;
  if (pv > pvMax) {
    pv = pvMax;
  }
};

void Pokemon::SetObjet(Objet nouvelObjet) {
  objet = nouvelObjet;
};


string Pokemon::GetNom() {
  return nom;
};

int Pokemon::GetPrix() {
  return prix;
};
