#ifndef VOITURE_H
#define VOITURE_H

#include "Vehicule.hpp"

class voiture_t : public Vehicule {
public:
    voiture_t(int vitesseMax = 0, int nbPlaces = 1, int occupants = 0);
    ~voiture_t();
    void demarrer();
    void arreter();
};

#endif