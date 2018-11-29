#pragma once
#include "item.h"
#include <string>

class bag
{
private:
	int n;
	item items[20];
public:
	void add(string anItemName, double anItemPrice);
	//pre: variables are initialized
	//task: add an item to the array
	//post: item is added

	void remove(string anItemName);
	//pre: array must not be empty
	//task: remove last item
	//post: last item is removed

	void clear();
	//pre: variables are initialized
	//task: remove all items from the array
	//post: array is empty

	int frequencyOf(string anItem);
	//pre: variables are initialized
	//task: count how many times a certain item appears
	//post: return the frequency

	bool isEmpty();
	//pre: array is initialized
	//task: check if the array is empty
	//post: return true or false

	bool contains(string anItem, int &x);
	//pre: array is initialized
	//task: search for an item
	//post: return true or false

	int getCurrentSize();
	//pre: array is initialized
	//task: find the size of the array
	//post: return the size

	void display();
	//pre: array is initialized
	//task: display the contents of the array
	//post: contents of the array are displayed

	//default constructor
	bag();
	~bag();
};

