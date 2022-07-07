#ifndef SKRYTOBOJCA_H_INCLUDED
#define SKRYTOBOJCA_H_INCLUDED
#include "Postac.h"
class Skrytobojca : public Postac
{
public:
    Skrytobojca(string n, int maxHp, int a);
    virtual void Atakuj(Postac* p);
};

#endif // SKRYTOBOJCA_H_INCLUDED
