#include "VoitureAmphibie.h"

VoitureAmphibie_t::VoitureAmphibie_t(int vitesseMax1, int vitesseMax2, int nbPlaces, int occupants) : voiture_t(vitesseMax1, nbPlaces, occupants), bateau_t(vitesseMax2, nbPlaces, occupants) {
}

VoitureAmphibie_t::~VoitureAmphibie_t() {;}
