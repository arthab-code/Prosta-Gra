#include <iostream>
#include "Drzewiec.h"

using namespace std;

Drzewiec::Drzewiec(string n, int maxHp, int a) : Postac(n,maxHp,a) {}

void Drzewiec::Atakuj(Postac* p)
{
         p->ustawHP(-_atak);
        cout << "Zostajesz zaatakowany i otrzymujesz " << _atak << " obrazen od ATAKU DRZEWCA, zostaje Ci " << p->zwrocHP() << " punktow zycia" << endl;
}
