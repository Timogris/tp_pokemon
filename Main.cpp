#include <iostream>
#include <string>

#include "Pokemon.h"
#include "AttaquePhysique.h"
#include "AttaqueSpeciale.h"
#include "Attaque.h"
#include "Objet.h"
#include "Joueur.h"

using namespace std;

void AchatPokemon(Joueur joueur) {
  char yn;
  cout << "Acheter " << this->GetNom() << " ? Y/n" << endl;
  cin >> yn;

  if (yn == 'y') {
    if (joueur.GetArgent() >= this->GetPrix()) {
      money  -= this->GetPrix();
      joueur.SetPokemon(this->GetId());
      break
    } else {
      cout << "Pas assez d'argent pour acheter ce Pokemon" << endl;
    } 

  }
};

void AchatBaie(Joueur joueur) {
  char yn;
  cout << Acheter <<
};

int main() {

  Objet aucunObjet(0, "Aucun", "Aucun", 0);
  Pokemon aucunPokemon("Aucun", 0, "Aucun", 0, 0, 0, 0, 0, 0, 0, 0, aucun);

  Pokemon bulbizarre(1, "Bulbizarre", 20, "PLANTE", 50, 5, 12, 23, 24, 32, 2, 11, aucunObjet);
  Pokemon salameche(2, "Salameche", 20, "FEU", 39, 5, 20, 31, 15, 12, 2, 24, aucunObjet);
  Pokemon carapuce(3, "Carapuce", 20, "EAU", 45, 5, 22, 29, 19, 20, 2, 18, aucunObjet);
  Pokemon pikachu(4, "Pikachu", 60, "ELECTRIK", 60, 5, 30, 45, 30, 41, 3, 47, aucunObjet);
  Pokemon chenipan(5, "Chenipan", 5, "INSECT", 10, 1, 5, 2, 3, 1, 1, 4, aucun);
  Pokemon arceus(6, "Arceus", 999999, "NORMAL", 1000, 100, 500, 500, 500, 500, 4, 500, aucunObjet);

  AttaquePhysique charge("Charge", "NORMAL", 1.00, 20, 35);
  AttaquePhysique griffe("Griffe", "NORMAL", 1.00, 25, 30);
  AttaquePhysique gigaimpact("Giga Impact", "NORMAL", 0.65, 120, 5);
  AttaquePhysique poingfeu("Poing Feu", "FEU", 1.00, 60, 15);
  AttaquePhysique lamefeuille("Lame Feuille", "PLANTE", 1.00, 80, 20);

  AttaqueSpeciale pistoletao("Pistolet à O", "EAU", 1.00, 30, 30);
  AttaqueSpeciale flammeche("Flammèche", "FEU", 1.00, 30, 30);
  AttaqueSpeciale volvie("Vol-Vie", "PLANTE", 1.00, 30, 20);
  AttaqueSpeciale ultralaser("Ultra Laser", "NORMAL", 0.80, 80, 5);
  AttaqueSpeciale hydrocanon("Hydrocanon", "EAU", 0.90, 80, 5);

  Objet melpa(1, "Melpa", "Rend 5PV", 5);
  Objet oran(1, "Oran", "Rend 20PV", 20);
  Objet ceriz(1, "Ceriz", "Rend 30PV", 30);
  Objet pecha(1, "Pecha", "Rend 45PV", 45);
  Objet sitrus(1, "Sitrus", "Rend 100PV", 100);

  Joueur joueur1(nom1, 500, aucunPokemon);
  Joueur joueur2(nom2, 500, aucunPokemon);

  string nom1;
  cout << "Nom J1" << endl;
  cout << "NOM: ";
  cin >> nom1;
  cout << endl;


  string nom2;
  cout << "Nom J2" << endl;
  cout << "NOM: ";
  cin >> nom2;
  cout << endl;



  int selection;

  cout << "J1 va acheter son Pokemon" << endl;

  while (joueur1.GetPokemon() != "Aucun") {
    cout << "J1 a " << joueur1.GetArgent() << " pieces" << endl; 
    
    cout << "J1 va acheter son Pokemon" << endl;
    cout << endl;
    
    cout << "[1] Bulbizarre [2] Salameche" << endl;
    cout << endl;
    cout << "[3] Carapuce   [4] Pikachu" << endl;
    cout << endl;
    cout << "[5] Chenipan   [6] Arceus" << endl;
    
    cout << endl;
    
    cout << "Vous pouvez afficher les stats d'un Pokemon en saisissant [1], [2], [3], [4], [5] ou [6]" << endl;

    cin >> selection;
    getchar();

    switch (selection) { 
    case 1: bulbizarre.Afficher();
      bulbizarre.AchatPokemon(joueur1);
    case 2: salameche.Afficher();
      salameche.AchatPokemon(joueur1);
    case 3: carapuce.Afficher();
      carapuce.AchatPokemon(joueur1);
    case 4: pikachu.Afficher();
      pikachu.AchatPokemon(joueur1);
    case 5: chenipan.Afficher();
      chenipan.AchatPokemon(joueur1);
    case 6: arceus.Afficher();
      arceus.AchatPokemon(joueur1);
    }:
  };

  cout << "J2 va acheter son Pokemon" << endl;

  while (joueur2.GetPokemon() != "Aucun") {
    cout << "J2 a " << joueur2.GetArgent() << " pieces" << endl; 
    
    cout << "J2 va acheter son Pokemon" << endl;
    cout << endl;
    
    cout << "[1] Bulbizarre [2] Salameche" << endl;
    cout << endl;
    cout << "[3] Carapuce   [4] Pikachu" << endl;
    cout << endl;
    cout << "[5] Chenipan   [6] Arceus" << endl;
    
    cout << endl;
    
    cout << "Vous pouvez afficher les stats d'un Pokemon en saisissant [1], [2], [3], [4], [5] ou [6]" << endl;
    
    cout << "J2 a " << joueur2.GetArgent() << " pieces" << endl;
    cin >> selection;
    getchar();

    switch (selection) { 
    case 1: bulbizarre.Afficher();
      bulbizarre.AchatPokemon(joueur2);
    case 2: salameche.Afficher();
      salameche.AchatPokemon(joueur2);
    case 3: carapuce.Afficher();
      carapuce.AchatPokemon(joueur2);
    case 4: pikachu.Afficher();
      pikachu.AchatPokemon(joueur2)
    case 5: chenipan.Afficher();
      chenipan.AchatPokemon(joueur2);
    case 6: arceus.Afficher();
      arceus.AchatPokemon(joueur2);
    };
  };

  return 0;

};


