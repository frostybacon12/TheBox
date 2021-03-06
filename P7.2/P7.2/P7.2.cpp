#include "pch.h"
#include <iostream>
#include <string>
#include "item.h"
#include "bag.h"

//Don't need to specify namespace std because we're including item.h, which already declares it.

/* Title: project7
 * By: Jake Hallstrom
 * Date: December 6, 2018
 * Lab: 10:00 AM
 * Description: Linear tests of multiple functions of the bag class. Main function tests each one of the bag functions inn succession.
 */

int main() {
	// declarations
	string name; //name of the item
	bag groceries; //bag object to hold items

	// testing
	cout << "==== TEST1: Adding Items ====\n\n";
	groceries.add("milk");
	groceries.add("meat");
	groceries.add("bread");
	groceries.add("lottery tickets");
	groceries.display(); //show items that have been added

	cout << "\n==== TEST2: Removing Last Item ====\n";
	groceries.remove("lottery tickets");
	groceries.display();

	cout << "\n==== TEST3: isEmpty() ====\n";
	if (groceries.isEmpty())
		cout << "The list is empty\n";
	else
		cout << "The list is not empty\n";

	cout << "\n==== TEST4: getSize() ====\n";
	cout << "The list has " << groceries.getCurrentSize() << " items\n";

	cout << "\n==== TEST5: clear() ====\n";
	groceries.clear(); //remove all items
	cout << "The list has " << groceries.getCurrentSize() << " items\n";

	cout << "\n==== TEST6: add list items() ====\n";
	// while loop to enter items
	cout << "Enter an item: ";
	getline(cin, name);
	while (name != "quit") {
		groceries.add(name);
		cout << "Enter another item: ";
		getline(cin, name);
	}
	groceries.display();

	cout << "\n==== TEST7: contains() ====\n";
	cout << "Search for an item that is NOT in the list: ";
	getline(cin, name);
	if (groceries.contains(name))
		cout << "list contains " << name << endl;
	else
		cout << "list does not contain " << name << endl;

	cout << "\n==== TEST8: contains() ====\n";
	cout << "Search for an item that is in the list: ";
	getline(cin, name);
	if (groceries.contains(name))
		cout << "list contains " << name << endl;
	else
		cout << "list does not contain " << name << endl;

	cout << "\n==== TEST9: getFrequencyOf() ====\n";
	cout << name << " is in the list " << groceries.frequencyOf(name)
		<< " times. " << endl;
}