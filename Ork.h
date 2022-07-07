#ifndef ORK_H_INCLUDED
#define ORK_H_INCLUDED
#include "Postac.h"

class Ork : public Postac
{
public:
    Ork(string n, int maxHp, int a);
    virtual void Atakuj(Postac* p);

};

#endif // ORK_H_INCLUDED
