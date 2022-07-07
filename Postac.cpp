#include "Postac.h"

Postac::Postac()
{
    _nazwa = "Domyslna";
    _maxHp = 100;
    _atak = 10;
    _hp = _maxHp;
}

Postac::Postac(string n)
{
    _nazwa = n;
}

Postac::Postac(string n, int maxHp, int a) : _nazwa(n), _maxHp(maxHp), _atak(a)
{
    cout << "KONSTRUKTOR POSTAC" << endl;
    _hp = _maxHp;
}

void Postac::Atakuj(Postac* p)
{
     p->ustawHP(-_atak);
         cout << "Atakujesz " << p->zwrocNazwe() << " zadajac mu " << _atak << " obrazen ATAKIEM POSTACI, zostaje mu " << p->zwrocHP() << " punktow zycia" << endl;
}

int Postac::zwrocHP()
{
    return _hp;
}

int Postac::zwrocMaxHp()
{
    return _maxHp;
}

void Postac::ustawHP(int v)
{
    _hp += v;

    if (_hp > _maxHp) _hp = _maxHp;


}

int Postac::zwrocAtak()
{
    return _atak;
}

string Postac::zwrocNazwe()
{
    return _nazwa;
}

string Postac::zwrocKlase()
{
    return _klasa;
}
