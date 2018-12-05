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

//default constructor
item::item()
{
	name = '\0'; //set name to NULL
}