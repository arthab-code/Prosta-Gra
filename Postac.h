#ifndef POSTAC_H_INCLUDED
#define POSTAC_H_INCLUDED
#include <iostream>

using namespace std;

class Postac
{
protected:
    string _nazwa;
    string _klasa;
    int _hp;
    int _maxHp;
    int _atak;
public:
    Postac(string n, int maxHp, int a);
    Postac(string n);
    Postac();
    virtual void Atakuj(Postac* p) = 0;
    friend void Walka(Postac& bohater, Postac& przeciwnik);
    void ustawHP(int v);
    int zwrocHP();
    int zwrocMaxHp();
    int zwrocAtak();
    string zwrocNazwe();
    string zwrocKlase();

};

#endif // POSTAC_H_INCLUDED
