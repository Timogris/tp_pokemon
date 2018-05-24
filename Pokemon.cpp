#include "Pokemon.h"
#include "Objet.h"
#include "AttaqueSpeciale.h"
#include "AttaquePhysique.h"

using namespace std;

// Constructeur
Pokemon::Pokemon(string _nom, int _prix, string _type, int _pv, int _niveau, int _attPhy, int _attSpe, int _defPhy, int _defSpe, int _attaque, int _vitesse, Objet _objet) {

 nom = _nom;
 prix = _prix;
 type = _type;
 pv = _pv;
 pvMax = _pv;
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

void Pokemon::AttaquerPhysique(Pokemon cible, AttaquePhysique& attaque) {
  if(attaque.GetPP() <= 0) {
      cout << "Attaque impossible: pas assez de PP" << endl;
  } else {
      int pvPerdu = attaque.CalculerDegat(cible, niveau, type, attPhy);
      cible.pv -= pvPerdu;
      if (cible.pv <= 0) {
          cible.etat = false;
      }
  }
}

void Pokemon::AttaquerSpeciale(Pokemon cible, AttaqueSpeciale& attaque) {
    if (attaque.GetPP() <= 0) {
        cout << "Attaque impossible: pas assez de PP" << endl;
    } else {
        int pvPerdu = attaque.CalculerDegat(cible, niveau, type, attSpe);
        if (attaque.getNom() == "Vol-Vie") {
            int pvRendu = pvPerdu / 2;
            RecupPv(pvRendu);
        }
        if (cible.pv <= 0) {
            cible.etat = false;
        }
    }
}

void Pokemon::Afficher(){
  cout << nom << " lvl. " << niveau << endl;
  cout << "$" << prix << endl;
  cout << pv << "PV" << endl;
  cout << "ATT: " << attPhy << " ATTSPE: " << attSpe << endl;
  cout << "DEF: " << defPhy << " DEFSPE: " << defSpe << endl;
  cout << "VIT: " << vitesse << endl;
  cout << "NB DE CAPACITES: " << attaque << endl;
};

void Pokemon::UtiliserObjet(){
    objet.Action(*this);
}

string Pokemon::GetType() {
  return type;
}

int Pokemon::GetNiveau() {
  return niveau;
}

int Pokemon::GetAttPhy() {
  return attPhy;
}

int Pokemon::GetAttSpe() {
  return attSpe;
}

int Pokemon::GetDefPhy() {
  return defPhy;
}

int Pokemon::GetDefSpe() {
  return defSpe;
}

int Pokemon::GetVitesse() {
  return vitesse;
}

int Pokemon::GetPv() {
  return pv;
}

int Pokemon::GetPvMax() {
  return pvMax;
}

void Pokemon::RecupPv(int pvRendu) {
  pv += pvRendu;
  if (pv > pvMax) {
    pv = pvMax;
  }
}

void Pokemon::SetObjet(Objet nouvelObjet) {
  objet = nouvelObjet;
}

void Pokemon::SetAttPhy(AttaquePhysique* attaque) {
    listAttPhy.push_back(attaque);
}

void Pokemon::SetAttSpe(AttaqueSpeciale* attaque) {
    listAttSpe.push_back(attaque);
}

string Pokemon::GetObjet() {
  return objet;
}
