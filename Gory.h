#ifndef GORY_H_INCLUDED
#define GORY_H_INCLUDED
#include "Plansza.h"

class Gory : public Plansza
{

public:
    virtual void GenerujPlansze();
    virtual Postac* GenerujPrzeciwnika();

};

#endif // GORY_H_INCLUDED
