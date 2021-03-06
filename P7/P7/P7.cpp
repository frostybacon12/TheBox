#include "pch.h"
#include <iostream>
#include <string>
#include "item.h"
#include "bag.h"

//Dont need to specify namespace std because we're including item.h, which already declares it.

/* Title: project7
 * By: Jake Hallstrom
 * Date: December 6, 2018
 * Lab: 10:00 AM
 * Description: Menu-driven implementation of multiple functions of the bag class. User inputs which function they want to use, and it is carried out by calling the function.
 */

int main()
{
	//declare variables
	bag aBag; //bag object
	string name; //item name
	double price; //item price
	char command = '\0'; //switch statement control variable; initialized to null
	bool flag = true; //loop control variable
	char flag2; //loop control for add

	//loop
	while (flag) {

		//input
		//list user's options before each command is entered
		cout << "\nEnter a command: \n" <<
			" 1 - Add an item \n" <<
			" 2 - Remove an item \n" <<
			" 3 - Empty the bag \n"
			" 4 - Count the frequency of an item if it is in the bag \n" <<
			" 5 - Check if the bag is empty \n" <<
			" 6 - Search for an item \n" <<
			" 7 - Show how many items are in the bag\n" <<
			" 8 - Show the contents of the bag  \n" <<
			" 9 - Exit the program \n";
		cin >> command;

		//processing and output
		//each number implements a different bag function
		switch (command) {

			
		case '1': //add
			do {
				cout << "\nEnter the item's name: ";
				cin.ignore();
				getline(cin, name);
				cout << "\nEnter the item's price: ";
				cin >> price;

				aBag.add(name, price);

				//loop
				cout << "\nAdd another item? (Y / N): ";
				cin >> flag2;
				flag2 = toupper(flag2);
			} while (flag2 == 'Y');
			break;
			
		case '2': //remove
			cout << "\nEnter an item name to remove: \n\n";
			cin >> name;

			aBag.remove(name);
			break;
			
		case '3': //clear
			aBag.clear();
			cout << "\nThe bag has been emptied.\n\n";
			break;

		case '4': //frequencyOf
			cout << "\nEnter an item to check the frequency of: ";
			cin >> name;
			cout << "\nThis item has a frequency of " << aBag.frequencyOf(name) << ".\n";
			break;
			
		case '5': //isEmpty
			if (aBag.isEmpty()) {
				cout << "\nThe bag is empty.\n\n";
			}
			else {
				cout << "\nThe bag is not empty.\n\n";
			}
			break;
			
		case '6': //contains
			cout << "\nEnter an item to search for: ";
			cin >> name;
			int x; // index of item if found.
			if (aBag.contains(name, x)) {
				cout << "\nThis item is in the bag.\nIt is item number " << x << "\n\n";
			}
			else {
				cout << "\nThis item is not in the bag.\n\n";
			}
			break;
			
		case '7': //getCurrentSize
			cout << "\nThere are " << aBag.getCurrentSize() << " items in the bag.\n\n";
			break;

		case '8': //display
			cout << "\n";
			aBag.display();
			break;
			
		case '9': //exit
			flag = false;
			break;
			
		default: //if user input is invalid, prompt for new input
			cout << "\nThat is not a valid command. Please try again: \n";
		}
	}

	//farewell
	cout << "\nGoodbye!" << endl;
}