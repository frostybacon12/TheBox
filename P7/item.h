#ifndef ITEM
#define ITEM
#include <string>

using namespace std;

class item {
private:
	string name; //name of the item
	double price; //cost of the item

public:

	//TODO: functions for changing data members



	//default constructor
	item() {
		name = "NULL";
		price = 0.00;
	}
}
#endif