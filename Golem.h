#ifndef GOLEM_H_INCLUDED
#define GOLEM_H_INCLUDED
#include "Postac.h"
class Golem : public Postac
{
public:
    Golem(string n, int maxHp, int a);
    virtual void Atakuj(Postac* p);
};

#endif // GOLEM_H_INCLUDED
