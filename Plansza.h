#ifndef PLANSZA_H_INCLUDED
#define PLANSZA_H_INCLUDED
#include "Postac.h"
class Plansza
{
public:
    virtual void GenerujPlansze() = 0;
    virtual Postac* GenerujPrzeciwnika() = 0;
};

#endif // PLANSZA_H_INCLUDED
