#include <iostream>
#include "Bagno.h"
#include "Ork.h"
using namespace std;

void Bagno::GenerujPlansze()
{
    cout << "Bagno jak bagno, nic poza smrodem i orkami tutaj nie znajdziesz.. a tak w ogole to jeden z nich wlasnie Cie atakuje :(" << endl;
}

Postac* Bagno::GenerujPrzeciwnika()
{
   return new Ork("Ork",100,15);
}
