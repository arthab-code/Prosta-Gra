#include <iostream>
#include "Las.h"
#include "Drzewiec.h"
using namespace std;

void Las::GenerujPlansze()
{
    cout << "Znajdujesz sie w pieknej lesnej scenerii, ptaszki cwierkaja nad glowami, wiewiorki przechadzaja sie kroczac sciolka lesna, zajac kica wesolo ";
    cout << "nad zdzblem trawy. Niestety zostajesz zaatakowany przez Drzewca :(" << endl;
}

Postac* Las::GenerujPrzeciwnika()
{
    return new Drzewiec("Drzewiec", 200, 5);
}
