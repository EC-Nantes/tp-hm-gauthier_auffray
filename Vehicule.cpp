#include <iostream>
#include <stdexcept>
#include "Vehicule.hpp"

Vehicule::Vehicule(int vitesseMax, int nbPlaces, int occupants) {
    this->vitesse_ = 0;
    this->vitesseMax_ = vitesseMax;
    this->nbPlaces_ = nbPlaces;
    this->occupants_ = occupants;
    this->etat_ = EtatVehicule::ARRET;
}

void Vehicule::demarrer() {
    if(etat_ == EtatVehicule::MARCHE || etat_ == EtatVehicule::PANNE_LEGERE || etat_ == EtatVehicule::PANNE_SEVERE) {
        throw std::invalid_argument("ERROR : Vehicule deja en marche ou en panne");
    }
    else {
        etat_ = EtatVehicule::MARCHE;
    }
}

void Vehicule::arreter() {
    etat_ = EtatVehicule::ARRET;
}

void Vehicule::depanner() {
    etat_ = EtatVehicule::ARRET;
}

void Vehicule::accelerer(int increment) {
    if((vitesse_ + increment) > vitesseMax_) {
        throw std::invalid_argument("ERROR : vitesse > vitesse max");
    }
    else if((vitesse_ + increment) < 0) {
        throw std::invalid_argument("ERROR : vitesse < 0");
    }
    else {
        vitesse_ = vitesse_ + increment;
    }
}

void Vehicule::monter(int nbOcc) {
    if(occupants_ + nbOcc > nbPlaces_) {
        throw std::invalid_argument("ERROR : Pas assez de place dans le vehicule");
    }
    else {
        occupants_ += nbOcc;
    }
}

void Vehicule::descendre(int nbOcc) {
    if(nbOcc > occupants_) {
        throw std::invalid_argument("ERROR : Pas assez d'occupant dans le vehicule");
    }
    else {
        occupants_ -= nbOcc;
    }
}

void Vehicule::mettreEnPanne(double random) {
    if(random < 0.5) {
        etat_ = EtatVehicule::PANNE_LEGERE;
    }
    else {
        etat_ = EtatVehicule::PANNE_SEVERE;
    }
}

string Vehicule::getEtat() const {
    switch (etat_) {
    case EtatVehicule::ARRET:
        return "ARRET";
        break;
    case EtatVehicule::MARCHE:
        return "MARCHE";
        break;
    case EtatVehicule::PANNE_LEGERE:
        return "PANNE_LEGERE";
        break;
    case EtatVehicule::PANNE_SEVERE:
        return "PANNE_SEVERE";
        break;
    default:
        return "ETAT ANNORMAL";
        break;
    }
}

Vehicule::~Vehicule(){;}

ostream& operator<<(ostream& s,Vehicule const& v) {
    s << "Vehicule : " << std::endl;
    s << "Vitesse : " << v.vitesse_ ;
    s << "  Vitesse max : " << v.vitesseMax_;
    s << "  nb place : " << v.nbPlaces_;
    s << "  nb occupant : " << v.occupants_;
    s << "  etat : " << v.getEtat() << std::endl;
    return s;
}