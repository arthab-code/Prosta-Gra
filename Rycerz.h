#ifndef RYCERZ_H_INCLUDED
#define RYCERZ_H_INCLUDED
#include "Postac.h"

class Rycerz : public Postac
{
public:
    Rycerz(string n, int maxHp, int a);
    virtual void Atakuj(Postac* p);
};

#endif // RYCERZ_H_INCLUDED
