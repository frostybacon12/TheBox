#include "pch.h"
#include<iostream>
#include "bag.h"

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
	for (int i = 0; i < n; i++) { //search for the item entered. This loop will check the whole array.
		if (items[i].getName().compare(anItemName) == 0) { //item is found
			for (int j = i; j < n; j++) { //overwrite the item with data from the item located at i + 1. Repeat until the end of the array.
				items[j].setName(items[j + 1].getName());
				items[j].setPrice(items[j + 1].getPrice());
			}
			n--; // array is one element smaller
		}
	}
}

//clear
void bag::clear()
{
	for (int i = 0; i < n; i++) {
		items[i].setName('\0'); //make the name null
		items[i].setPrice(0.0); //make price default
	}
	n = 0; //array is empty, so size is 0
}

//frequencyOf
int bag::frequencyOf(string anItemName)
{
	int x = 0; //stores frequency of an item's name
	for (int i = 0; i < n; i++) {
		if (items[i].getName().compare(anItemName) == 0) {
			x++; //for each time the item is in the bag, frequency is increased by 1
		}
	}
	return x;
}

//isEmpty
bool bag::isEmpty()
{
	if (n == 0) { //n is the number of items in the array. If n == 0, the array is empty.
		return true;
	}
	return false;
}

//contains
bool bag::contains(string anItemName, int & x)
{
	for (int i = 0; i < n; i++) {
		if (items[i].getName().compare(anItemName) == 0) {
			x = i++; //index + 1, as the array starts at 0
			return true; //item is in the bag
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
			std::cout << (items[i]).getName() << " . . . . . $" << (items[i]).getPrice() << "\n"; //output the name and price for each item
		}
	}
}

//default constructor
bag::bag()
{
	n = 0;
}