#ifndef VOITUREAMPHIBIE_H
#define VOITUREAMPHIBIE_H

#include "voiture.h"
#include "bateau.h"

class VoitureAmphibie_t : public voiture_t, public bateau_t {
public:
    VoitureAmphibie_t(int vitesseMax1 = 0, int vitesseMax2 = 0, int nbPlaces = 1, int occupants = 0);
    ~VoitureAmphibie_t();
};

#endif