#include "pch.h"
#include "bag.h"
#include "item.h"
;
//add function
void bag::add(item thisItem)
{
	items[n] = thisItem; //add an item to the array
	n++; //array is one element bigger
}

//remove function
void bag::remove()
{
	items[n - 1].setName(to_string(0)) ; //make the name null
	items[n - 1].setPrice(0.0); //make price default
	n--; // array is one element smaller
}

//clear function
void bag::clear()
{
	for (int i = 0; i < n; i++) {
		items[i].setName(to_string(0)); //make the name null
		items[i].setPrice(0.0); //make price default
	}
	n = 0; //array is empty, so size is 0
}

//frequencyOf
int bag::frequencyOf(item thisItem) {
	int x = 0;
	for (int i = 0; i < n; i++) {
		if (items[i].getName().compare(thisItem)) {
			x++; //frequency increased by 1
		}
	}
	return x;
}

//isEmpty function
bool bag::isEmpty()
{
	if (n == 0) {
		return true;
	}
	return false;
}

//contains function
bool bag::contains(item thisItem, int &x) {
	for (int i = 0; i < n; i++) {
		if (items[i].getName().compare(thisItem) == 0) {
			x = i + 1; // index + 1
			return true; // item is in the bag
		}
	}
	return false;
}

//getCurrentSize function
int bag::getCurrentSize() {
	return n;
}

//display function
void bag::display()
{
	if (n == 0) {
		cout << "The bag is empty.\n";
	}
	else {
		for (int i = 0; i < n; i++) {
			cout << items[i].getName() << " . . . . . $" << items[i].getPrice() << "\n";
		}
	}
}
