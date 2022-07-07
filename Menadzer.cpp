#include <iostream>
#include <windows.h>
#include "Menadzer.h"
#include "Postac.h"
#include "Rycerz.h"
#include "Skrytobojca.h"
#include "Plansza.h"
#include "Las.h"
#include "Gory.h"
#include "Bagno.h"
using namespace std;

Postac* Menadzer::Inicjalizacja()
{
    string nazwa;
    char wybor;

    cout << "Podaj imie postaci : " << endl;
    cin >> nazwa;

    cout << "Wybierz klase postaci : " << endl;
    cout << "[1] Rycerz" << endl;
    cout << "[2] Skrytobojca" << endl;
    cin >> wybor;

    if (wybor != '1' && wybor != '2')
    {
        cout << "ZLY WYBOR" << endl;
        exit(0);
    }

    if (wybor == '1')
    {
        cout << "Wybrales rycerza" << endl;

        return new Rycerz(nazwa, 100, 20);
    }

    if (wybor == '2')
    {
        cout << "Wybrales skrytobojce" << endl;
        return new Skrytobojca(nazwa, 100, 20);
    }
}

void Menadzer::StatyGracza(Postac* p)
{
    cout << "KLASA POSTACI: " << p->zwrocKlase() << endl;
    cout << "Imie: " << p->zwrocNazwe() << endl;
    cout << "HP: " << p->zwrocHP() << " / " << p->zwrocMaxHp() << endl;
    cout << "ATAK: " << p->zwrocAtak() << endl;
    cout << "_____________________________" << endl;
    cout << endl;
}

char Menadzer::CityMenu(Postac* p)
{
    StatyGracza(p);
    cout << "Jestes w miescie. Mozesz udac sie w podroz zmierzyc sie z monstrami lub uleczyc sie w pobliskiej lecznicy. Wybierz co chcesz zrobic:" << endl;
    cout << "[1] Udaj sie do uzdrowiciela" << endl;
    cout << "[2] Udaj sie w podroz do lasu" << endl;
    cout << "[3] Udaj sie na wspinaczke po gorach" << endl;
    cout << "[4] Udaj sie na bagna" << endl;
    cout << "[q] Wyjdz z gry" << endl;
    char wybor;
    cin >> wybor;

    return wybor;
}

void Walka(Postac& bohater, Postac& przeciwnik)
{
    Sleep(500);
    while (bohater._hp > 0 && przeciwnik._hp > 0)
    {
      Sleep(500);
      bohater.Atakuj(&przeciwnik);
      if (przeciwnik._hp <= 0 ) break;
      Sleep(500);
      przeciwnik.Atakuj(&bohater);
      if (bohater._hp <= 0 ) break;

    }
    if (bohater._hp > 0) cout << "WYGRYWASZ !" << endl;
    else cout << "PRZEGRYWASZ !" << endl;

    system("pause");

cout << endl;
}

void Menadzer::PetlaGry()
{
    Postac* gracz = Inicjalizacja();
    system("pause");
    Postac* przeciwnik;
    Plansza* plansza;

    system("cls");

    char wybor;
    do{
    system("cls");
    wybor = CityMenu(gracz);
    system("cls");


    if (wybor == '1')
    {
        cout << "Zostajesz uzdrowiony !" << endl;
        gracz->ustawHP( gracz->zwrocMaxHp() );
        cout << endl;
        system("pause");
        continue;
    }
    else if (wybor == '2')
    {
       plansza = new Las;
       plansza->GenerujPlansze();
       przeciwnik = plansza->GenerujPrzeciwnika();

    } else if (wybor == '3')
    {
       plansza = new Gory;
       plansza->GenerujPlansze();
       przeciwnik = plansza->GenerujPrzeciwnika();

    } else if (wybor == '4')
    {
       plansza = new Bagno;
       plansza->GenerujPlansze();
       przeciwnik = plansza->GenerujPrzeciwnika();

    } else {
    continue;
    }

    Walka(*gracz, *przeciwnik);

    delete przeciwnik;
    delete plansza;


    }while(wybor != 'q');

    delete gracz;

}
