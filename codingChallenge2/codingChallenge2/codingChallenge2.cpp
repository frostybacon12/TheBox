#include "pch.h"
#include <iostream>

using namespace std;

int main()
{
	int num1 = 0, num2 = 1, numNext, outputTerms;

	cout << "How many terms would you like?  ";
	cin >> outputTerms;

	for (int i = 0; i < outputTerms; i++) {
		if (i == 0) {
			cout << num1 << ",  ";
			continue;
		}
		
		if (i == 1) {
			cout << num2 << ",  ";
			continue;
		}

		numNext = num1 + num2;
		num1 = num2;
		num2 = numNext;

		cout << num2;

		if (i < outputTerms) {
			cout << ",  ";
		}
	}
}


