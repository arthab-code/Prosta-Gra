#include "Skrytobojca.h"
#include <iostream>

using namespace std;

Skrytobojca::Skrytobojca(string n, int maxHp, int a) : Postac(n,maxHp,a) { _klasa = "Skrytobojca"; cout << "KONSTRUKTOR POCHODNY" << endl; }

void Skrytobojca::Atakuj(Postac* p)
{
         p->ustawHP(-_atak);
         cout << "Atakujesz " << p->zwrocNazwe() << " zadajac mu " << _atak << " obrazen ATAKIEM SKRYTOBOJCY, zostaje mu " << p->zwrocHP() << " punktow zycia" << endl;
}
