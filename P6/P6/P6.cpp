#include "pch.h"
#include <iostream>
#include <string>

using namespace std;

const int SIZE = 10;

class bag {
private:
	int n;
	string items[SIZE]; //can be any number

public:
	void add(string item);
	void remove();
	void clear();
	int frequencyOf(string item);
	bool isEmpty();
	bool contains(string item);
	int getCurrentSize();
	void display();

	bag() {
		n = 0;
	}
};

int main() {
	bag grabBag;
	string item; 
	int command = 0;
	bool flag = true;

	while (flag) {

		cout << "\nEnter a command: \n 1 - add an item \n 2 - delete an item \n 3 - delete all items \n 4 - display the contents of the bag \n 5 - exit the program \n ";
		cin >> command;

		switch (command) {
			case 1:
			cout << "\nEnter an item to add: ";
			cin >> item;
			grabBag.add(item);
			break;

			case 2:
			grabBag.remove();
			cout << "\nThe last item in the bag has been removed.\n\n";
			break;

			case 3:
			grabBag.clear();
			cout << "\nThe bag has been emptied.\n\n";
			break;

			case 4:
			cout << "\n";
			grabBag.display();
			break;

			case 5:
			flag = false;
			break;

			default:
			cout << "\nThat is not a valid command. Please try again. \n";

		}	
	}
	cout << "\nGoodbye!";
}

void bag::add(string item)
{
	items[n] = item;
	n++;
}

void bag::remove()
{
	items[n - 1] = to_string(0);
	n--;
}

void bag::clear()
{
	for (int i = 0; i < n; i++) {
		items[i] = to_string(0);
	}
	n = 0; 
}

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
