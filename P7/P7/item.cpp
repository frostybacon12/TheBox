#include "pch.h"
#include <string>
#include "item.h"

//setName
void item::setName(string newName)
{
	name = newName;
}

//getName
string item::getName()
{
	return name;
}

//setPrice
void item::setPrice(double newPrice)
{
	price = newPrice;
}

//getPrice
double item::getPrice()
{
	return price;
}

//default constructor
item::item()
{
	name = '\0'; //set name to NULL
	price = 0.0;
}