#ifndef BAGNO_H_INCLUDED
#define BAGNO_H_INCLUDED
#include "Plansza.h"

class Bagno : public Plansza
{
public:
    virtual void GenerujPlansze();
    virtual Postac* GenerujPrzeciwnika();
};


#endif // BAGNO_H_INCLUDED
