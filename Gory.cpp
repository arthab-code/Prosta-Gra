#include <iostream>
#include "Gory.h"
#include "Golem.h"
using namespace std;

void Gory::GenerujPlansze()
{
   cout << "Patrzysz na oblodzony szczyt zanurzony w chmurach. Niestety dostajesz z nienacka piache na twarz od Golema ;(" << endl;

}

Postac* Gory::GenerujPrzeciwnika()
{
    return new Golem("Golem", 50,10);
}
