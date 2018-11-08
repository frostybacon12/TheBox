#include "pch.h"
#include <iostream>
#include <string>
#include <random>
#include <ctime>

using namespace std;

struct item {
	string description;
	int quantity;
};

int main()
{
	item list[5];

	srand(time(0));

	for (int i = 0; i < 5; i++) {
		cout << "Enter a description: ";
		getline(cin, list[i].description);

		list[i].quantity = rand() % 100;
	}

	cout << "\n";

	for (int i = 0; i < 5; i++) {
		cout << list[i].description << "  " << list[i].quantity << endl;
	}

}
