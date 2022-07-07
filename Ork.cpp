#include <iostream>
#include "Ork.h"

using namespace std;

Ork::Ork(string n, int maxHp, int a) : Postac(n,maxHp,a) {}

void Ork::Atakuj(Postac* p)
{
         p->ustawHP(-_atak);
        cout << "Zostajesz zaatakowany i otrzymujesz " << _atak << " obrazen od ATAKU ORKA, zostaje Ci " << p->zwrocHP() << " punktow zycia" << endl;
}
