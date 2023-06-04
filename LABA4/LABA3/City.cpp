#include "City.h"
#include <iostream>
#include <string>

City::City()
{

};
string City::toString() {
	string str = "Name:"+name;
	return str;
}
City::City(string name, int index):Region(name, index){};
