#ifndef CITY_H_INCLUDED
#define CITY_H_INCLUDED
#include "Plansza.h"
class City : public Plansza
{
public:
    virtual void GenerujPlansze();
    virtual Postac* GenerujPrzeciwnika();
};

#endif // CITY_H_INCLUDED
