#ifndef DRZEWIEC_H_INCLUDED
#define DRZEWIEC_H_INCLUDED
#include "Postac.h"
class Drzewiec : public Postac
{
  public:
      Drzewiec(string n, int maxHp, int a);
      virtual void Atakuj(Postac* p);
};

#endif // DRZEWIEC_H_INCLUDED
