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
void bag::add(string anItemName, double anItemPrice)
{
	items[n].setName(anItemName); //add an item to the array by giving it a non-null name
	items[n].setPrice(anItemPrice); //set the price to the user input
	n++; //array is one element bigger
}

//remove
void bag::remove(string anItemName)
{
	for (int i = 0; i < n; i++) {
		if (items[i].getName().compare(anItemName) == 0) {
			for (int j = i; j < n; j++) {
				items[j].setName(items[j + 1].getName());
				items[j].setPrice(items[j + 1].getPrice());
			}
		}
	}
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

//frequencyOf
int bag::frequencyOf(string anItemName)
{
	int x = 0;
	for (int i = 0; i < n; i++) {
		if (items[i].getName().compare(anItemName) == 0) {
			x++; //frequency increased by 1
		}
	}
	return x;
}

//isEmpty
bool bag::isEmpty()
{
	if (n == 0) {
		return true;
	}
	return false;
}

//contains
bool bag::contains(string anItemName, int & x)
{
	for (int i = 0; i < n; i++) {
		if (items[i].getName().compare(anItemName) == 0) {
			x = i + 1; // index + 1
			return true; // item is in the bag
		}
	}
	return false;
}

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
