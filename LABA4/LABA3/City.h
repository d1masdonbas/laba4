#pragma once
#include "Region.h"

class City : public Region 
{
public:
	City();
	City(string name,int index);
	string toString() override;
};