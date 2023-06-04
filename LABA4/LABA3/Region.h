#pragma once
#include "Place.h"

class Region : public Place 
{
public:
	Region();
	Region(string name, int index);
	string toString();
};
