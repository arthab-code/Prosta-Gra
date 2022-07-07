#include <iostream>
#include "Rycerz.h"

Rycerz::Rycerz(string n, int maxHp, int a) : Postac(n, maxHp, a) { _klasa = "Rycerz"; cout << "KONSTRUKTOR POCHODNY" << endl; }

void Rycerz::Atakuj(Postac* p)
{
         p->ustawHP(-_atak);
         cout << "Atakujesz " << p->zwrocNazwe() << " zadajac mu " << _atak << " obrazen ATAKIEM RYCERZA, zostaje mu " << p->zwrocHP() << " punktow zycia" << endl;
}
