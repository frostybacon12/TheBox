#pragma once
#include <string>

using namespace std;

class item
{
private:
	string name;
	double price;

public:
	//mutators
	void setName(string newName);
	string getName();
	void setPrice(double newPrice);
	double getPrice();

	//default constructors
	item();
	~item();
};

