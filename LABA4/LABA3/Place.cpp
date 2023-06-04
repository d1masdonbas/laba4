#include "Place.h"
#include <iostream>
#include <string>

Place** place = new Place * [100];
int Place::count = -1;

Place::Place() 
{
	++count;
}



Place::Place(string name, int index) 
{
	++count;
	this->name = name;
	this->index = index;
}

void Place::Add() 
{
	::place[count] = this;
}

void Place::Print()
{
	for (int i = 0; i <= Place::count; i++)
		if (place[i] != nullptr)
			cout<< place[i]->toString() << endl;
}
void Place::showCities(int index)
{
	for (int i = 0; i < count; i++)
	{
		if (place[i]->index == index)
		{

			cout << place[i]->getRegion() << "\n";
		}

	}

}
string Place::getRegion() const
{
	return name;
}

string Place::toString() {
	string str = "Name:" + name;
	return str;
}
Place::~Place() 
{
	delete[] place;
}