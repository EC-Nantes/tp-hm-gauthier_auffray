#ifndef BATEAU_H
#define BATEAU_H

#include "Vehicule.hpp"

class bateau_t : public Vehicule {
public:
    bateau_t(int vitesseMax = 0, int nbPlaces = 1, int occupants = 0);
    ~bateau_t();
    void demarrer();
    void arreter();
};

#endif