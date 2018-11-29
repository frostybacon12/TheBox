#include "pch.h"
#include<iostream>
#include "bag.h"

//default constructers
bag::bag()
{
	n = 0;
}

bag::~bag()
{
}

//add
void bag::add(item anItem)
{
	items[n] = anItem; //add an item to the array
	n++; //array is one element bigger
}

//remove
void bag::remove()
{
	items[n - 1].setName(to_string(0)); //make the name null
	items[n - 1].setPrice(0.0); //make price default
	n--; // array is one element smaller
}

//clear
void bag::clear()
{
	for (int i = 0; i < n; i++) {
		items[i].setName(to_string(0)); //make the name null
		items[i].setPrice(0.0); //make price default
	}
	n = 0; //array is empty, so size is 0
}

/*



//frequencyOf
int bag::frequencyOf(item anItem)
{
	int x = 0;
	for (int i = 0; i < n; i++) {
		if (items[i].getName().compare(anItem)) {
			x++; //frequency increased by 1
		}
	}
	return x;
}



*/

//isEmpty
bool bag::isEmpty()
{
	if (n == 0) {
		return true;
	}
	return false;
}

/*



//contains
bool bag::contains(item anItem, int & x)
{
	for (int i = 0; i < n; i++) {
		if (items[i].getName().compare(anItem) == 0) {
			x = i + 1; // index + 1
			return true; // item is in the bag
		}
	}
	return false;
}



*/

//getCurrentSize
int bag::getCurrentSize()
{
	return n;
}

//display
void bag::display()
{
	if (n == 0) {
		std::cout << "The bag is empty.\n";
	}
	else {
		for (int i = 0; i < n; i++) {
			std::cout << (items[i]).getName() << " . . . . . $" << (items[i]).getPrice() << "\n";
		}
	}
}
