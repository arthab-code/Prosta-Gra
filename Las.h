#ifndef LAS_H_INCLUDED
#define LAS_H_INCLUDED
#include "Plansza.h"
class Las : public Plansza
{

public:
    virtual void GenerujPlansze();
    virtual Postac* GenerujPrzeciwnika();

};


#endif // LAS_H_INCLUDED
