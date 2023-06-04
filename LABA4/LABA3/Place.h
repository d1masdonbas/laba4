#pragma once
#include <string>
using namespace std;
class Place
{
	static int count;
protected:
	string name;
	string region;
	int index;
public:
	void Add();
	Place();
	Place(string name, int index);
	static void Print();
	virtual string toString();
	static void showCities(int index);
	virtual string getRegion() const;
	virtual ~Place();
};