#include "pch.h"
#include <string>
#include "item.h"

using namespace std;

void item::setName(string newName)
{
	name = newName;
}

string item::getName()
{
	return name;
}

void item::setPrice(double newPrice)
{
	price = newPrice;
}

double item::getPrice()
{
	return price;
}

item::item()
{
	name = '\0';
	price = 0.0;
}

item::~item()
{
}
