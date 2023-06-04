#include "Region.h"
#include <iostream>
#include <string>

Region::Region()
{

};

Region::Region(string name, int index):Place(name,index){};

string Region::toString() {
	string str = "Name:" + name;
	return str;
}