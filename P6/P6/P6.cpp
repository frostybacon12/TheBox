#include "pch.h"
#include <iostream>
#include <string>

/* Title: project6
 * By: Jake Hallstrom
 * Date: November 15, 2018
 * Lab: 10:00 AM
 * Description: Menu-driven implementation of multiple functions of the bag class. User inputs which function they want to use, and it is carried out by calling the function.
 */

using namespace std;

const int SIZE = 20; //size of the array

class bag {
private:
	int n; //current number of items in the bag
	string items[SIZE]; //list of items in the bag

public:
	void add(string item);
	//pre: variables are initialized
	//task: add an item to the array
	//post: item is added

	void remove();
	//pre: array must not be empty
	//task: remove last item
	//post: last item is removed

	void clear();
	//pre: variables are initialized
	//task: remove all items from the array
	//post: array is empty

	int frequencyOf(string item);
	//pre: variables are initialized
	//task: count how many times a certain item appears
	//post: return the frequency

	bool isEmpty();
	//pre: array is initialized
	//task: check if the array is empty
	//post: return true or false

	bool contains(string item, int &x);
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
	bag() {
		n = 0;
	}
};

int main() {

	//declare variables
	bag grabBag; //bag object
	string item; //holds user input to be passed to bag functions
	int command = 0; //switch statement control variable
	bool flag = true; //loop control variable
	char flag2;//loop control for add

	//loop
	while (flag) {

		//input
		//list user's options before each command is entered
		cout << "\nEnter a command: \n" <<
			" 1 - add an item \n" <<
			" 2 - delete an item \n" <<
			" 3 - delete all items \n"
			" 4 - count how many times an item is in the bag \n" << 
			" 5 - check if the bag is empty \n" << 
			" 6 - search for an item \n" <<
			" 7 - show how many items are in the bag\n" <<
			" 8 - display the contents of the bag  \n" <<
			" 9 - exit the program \n"; 
		cin >> command;
		
		//processing and output
		//each number implements a different bag function
		switch (command) {
			//add
			case 1:
				do {
					cout << "\nEnter an item to add: ";
					cin >> item;
					grabBag.add(item);

					//loop
					cout << "\nAdd another item? (Y / N): ";
					cin >> flag2;
					flag2 = toupper(flag2);
				} while (flag2 == 'Y');
				break;

			//remove
			case 2:
				grabBag.remove();
				cout << "\nThe last item in the bag has been removed.\n\n";
				break;

			//clear
			case 3:
				grabBag.clear();
				cout << "\nThe bag has been emptied.\n\n";
				break;

			//frequencyOf
			case 4:
				cout << "\nEnter an item to check the frequency of: ";
				cin >> item;
				cout << "\nThis item has a frequency of " << grabBag.frequencyOf(item);
				break;

			//isEmpty
			case 5:
				if (grabBag.isEmpty()) {
					cout << "\nThe bag is empty.\n\n";
				}
				else {
					cout << "\nThe bag is not empty.\n\n";
				}
				break;

			//contains
			case 6:
				cout << "\nEnter an item to search for: ";
				cin >> item;
				int x; // index of item if found.
				if (grabBag.contains(item, x)) {
					cout << "\nThis item is in the bag.\nIt is item number " << x << "\n\n";
				}
				else {
					cout << "\nThis item is not in the bag.\n\n";
				}
				break;

			//getCurrentSize
			case 7:
				cout << "\nThere are " << grabBag.getCurrentSize() << " items in the bag.\n\n";
				break;

			//display
			case 8:
				cout << "\n";
				grabBag.display();
				break;

			//exit
			case 9:
				flag = false;
				break;

			//if user input is invalid, prompt for new input
			default:
				cout << "\nThat is not a valid command. Please try again: \n";
		}	
	}

	//farewell
	cout << "\nGoodbye!" << endl;
}

//add function
void bag::add(string item)
{
	items[n] = item; //add an item to the array
	n++; //array is one element bigger
}

//remove function
void bag::remove()
{
	items[n - 1] = to_string(0); //make the item null
	n--; // array is one element smaller
}

//clear function
void bag::clear()
{
	for (int i = 0; i < n; i++) {
		items[i] = to_string(0); //make the item null
	}
	n = 0; //array is empty, so size is 0
}

//frequencyOf
int bag::frequencyOf(string item) {
	int x = 0;
	for (int i = 0; i < n; i++) {
		if (items[i].compare(item) == 0) {
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
bool bag::contains(string item, int &x) {
	for (int i = 0; i < n; i++) {
		if (items[i].compare(item) == 0) {
			x = i+1; // index + 1
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
			cout << items[i] << "\n";
		}
	}
}