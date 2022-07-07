#ifndef MENADZER_H_INCLUDED
#define MENADZER_H_INCLUDED
#include "Postac.h"
class Menadzer
{
public:
    Postac* Inicjalizacja();
    void PetlaGry();
    char CityMenu(Postac* p);
    void StatyGracza(Postac* p);
};

#endif // MENADZER_H_INCLUDED
