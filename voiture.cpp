#include <iostream>
#include "voiture.h"

voiture_t::voiture_t(int vitesseMax, int nbPlaces, int occupants) : Vehicule(vitesseMax, nbPlaces, occupants) {
}

voiture_t::~voiture_t() {;}

void voiture_t::demarrer() {
    if(etat_ == EtatVehicule::MARCHE || etat_ == EtatVehicule::PANNE_LEGERE || etat_ == EtatVehicule::PANNE_SEVERE) {
        throw std::invalid_argument("ERROR : Vehicule deja en marche ou en panne");
    }
    else {
        etat_ = EtatVehicule::MARCHE;
        std::cout << "Demarrage d'une voiture" << std::endl;
    }
}

void voiture_t::arreter() {
    etat_ = EtatVehicule::ARRET;
    std::cout << "Arret d'une voiture" << std::endl;
}