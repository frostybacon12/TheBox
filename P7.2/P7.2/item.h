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

	//default constructor
	item();
	//pre: code compiles correctly
	//task: make an item object with the default values
	//post: a default item will exist
};