#include "bateau.h"

bateau_t::bateau_t(int vitesseMax, int nbPlaces, int occupants) : Vehicule(vitesseMax, nbPlaces, occupants) {
}

bateau_t::~bateau_t() {;}

void bateau_t::demarrer() {
    if(etat_ == EtatVehicule::MARCHE || etat_ == EtatVehicule::PANNE_LEGERE || etat_ == EtatVehicule::PANNE_SEVERE) {
        throw std::invalid_argument("ERROR : Vehicule deja en marche ou en panne");
    }
    else {
        etat_ = EtatVehicule::MARCHE;
        std::cout << "Demarrage d'un bateau" << std::endl;
    }
}

void bateau_t::arreter() {
    etat_ = EtatVehicule::ARRET;
    std::cout << "Arret d'un bateau" << std::endl;
}