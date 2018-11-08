#include "pch.h"
#include <iostream>
#include <string>

using namespace std;

struct movie {
	string name, rating;
	int terrible, bad, ok, good, great;
};

int main()
{
	movie myMovie;
	int rating;

	cout << "Movie name: ";
	cin >> myMovie.name;

	cout << "Movie rating (1 - 5): ";
	cin >> myMovie.rating;

	myMovie.terrible = 0;
	myMovie.bad = 0;
	myMovie.ok = 0;
	myMovie.good = 0;
	myMovie.great = 0;

	// read a single rating value (1-5)
	cout << "Movie rating (1 - 5): ";
	cin >> rating;

	// increment the appropriate myMovie rating counter
	// using a switch statement
	switch ( rating ) {
	case 1: myMovie.terrible++;
		break;
	case 2: myMovie.bad++;
		break;
	case 3: myMovie.ok++;
		break;
	case 4: myMovie.good++;
		break;
	case 5: myMovie.great++;
		break;
	default: cout << "That is not a valid input.";
		break;
	}

	// display the rating counts
	cout << "Terrible: " << myMovie.terrible << endl;
	cout << "Bad: " << myMovie.bad << endl;
	cout << "OK: " << myMovie.ok << endl;
	cout << "Good: " << myMovie.good << endl;
	cout << "Great: " << myMovie.great << endl;
}
