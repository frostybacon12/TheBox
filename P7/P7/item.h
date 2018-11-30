#pragma once
#include <string>

using namespace std; //needed for string implementation

class item
{
private:
	string name; //the item's name
	double price; //the item's price

public:
	//mutators
	void setName(string newName);
	//pre: variables are initialized
	//task: set name to new variable
	//post: name will be changed

	string getName();
	//pre: variables are initialized
	//task: return name
	//post: name is returned

	void setPrice(double newPrice);
	//pre: variables are initialized
	//task: set price to new variable
	//post: price will be changed

	double getPrice();
	//pre: variables are initialized
	//task: return price
	//post: price is returned

	//default constructor
	item();
	//pre: code compiles correctly
	//task: make an item object with the default values for each variable
	//post: a default item will exist
};