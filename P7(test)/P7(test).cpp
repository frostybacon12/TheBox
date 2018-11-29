#include "pch.h"
#include <iostream>
#include <string>
#include "item.h"
#include "bag.h"

using namespace std;

/* Title: project7
 * By: Jake Hallstrom
 * Date: November 15, 2018
 * Lab: 10:00 AM
 * Description:
 */

int main()
{
	//declare variables
	bag aBag; //bag object
	string name; //item name
	double price; //item price
	char command = '0'; //switch statement control variable
	bool flag = true; //loop control variable
	char flag2; //loop control for add

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
		case '1':
			do {
				cout << "\nEnter the item's name: ";
				cin >> name;
				cout << "\nEnter the item's price: ";
				cin >> price;

				aBag.add(name, price);

				//loop
				cout << "\nAdd another item? (Y / N): ";
				cin >> flag2;
				flag2 = toupper(flag2);
			} while (flag2 == 'Y');
			break;

			//remove
		case '2':
			cout << "\nEnter an item name to remove: \n\n";
			cin >> name;

			aBag.remove(name);
			break;

			//clear
		case '3':
			aBag.clear();
			cout << "\nThe bag has been emptied.\n\n";
			break;

			//frequencyOf
		case '4':
			cout << "\nEnter an item to check the frequency of: ";
			cin >> name;
			cout << "\nThis item has a frequency of " << aBag.frequencyOf(name);
			break;

			//isEmpty
		case '5':
			if (aBag.isEmpty()) {
				cout << "\nThe bag is empty.\n\n";
			}
			else {
				cout << "\nThe bag is not empty.\n\n";
			}
			break;

			//contains
		case '6':
			cout << "\nEnter an item to search for: ";
			cin >> name;
			int x; // index of item if found.
			if (aBag.contains(name, x) ) {
				cout << "\nThis item is in the bag.\nIt is item number " << x << "\n\n";
			}
			else {
				cout << "\nThis item is not in the bag.\n\n";
			}
			break;

			//getCurrentSize
		case '7':
			cout << "\nThere are " << aBag.getCurrentSize() << " items in the bag.\n\n";
			break;

			//display
		case '8':
			cout << "\n";
			aBag.display();
			break;

			//exit
		case '9':
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