#include <iostream>
#include <string>
#include "City.h"
#include "Megapolis.h"
#include "Place.h"
#include "Region.h"
using namespace std;


int main()
{
    Place* city0 = new City("Ternopil", 1);
    city0->Add();
    Place* city1 = new City("Chortkiv", 1);
    city1->Add();
    Place* city2 = new City("Terebolya", 1);
    city2->Add();
    Place* city3 = new City("Lviv", 2);
    city3->Add();
    Place* city4 = new City("Peremishlyani", 2);
    city4->Add();
    Place* city5 = new City("Zolochiv", 2);
    city5->Add();
    
    Place* region0 = new Region("Ternopil region", 1);
    region0->Add();
    Place* region1 = new Region("Lviv region", 2);
    region1->Add();

    /*Place* megapolis0 = new Megapolis("Bos-Wash");
    megapolis0->Add();*/
    /*Place::Print();*/
    Place::showCities(2);

    return 0;
}
