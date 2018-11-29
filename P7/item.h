#ifndef ITEM
#define ITEM
#include <string>

using namespace std;

class item {
private:
	string name; //name of the item
	double price; //cost of the item

public:

	//getters and setters
	void setName(string newName) { name = newName; }

	string getName() { return name; }

	void setPrice(double newPrice) { price = newPrice; }

	double getPrice() { return price; }

	//default constructor
	item() {
		name = "NULL";
		price = 0.00;
	}
}
#endif