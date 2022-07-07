#include <iostream>
#include "Golem.h"

using namespace std;

Golem::Golem(string n, int maxHp, int a) : Postac(n,maxHp,a) {}

void Golem::Atakuj(Postac* p)
{
         p->ustawHP(-_atak);
        cout << "Zostajesz zaatakowany i otrzymujesz " << _atak << " obrazen od ATAKU GOLEMA, zostaje Ci " << p->zwrocHP() << " punktow zycia" << endl;
}
