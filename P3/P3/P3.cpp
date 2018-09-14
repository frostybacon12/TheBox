#include "pch.h"
#include <iostream>

using namespace std;

/* Title: project3
 * By: Jake Hallstrom
 * Date: October 4, 2018
 * Lab: 10:00 AM
 * Description: User enters initial population and number of days,
 *              program calculates population using the Fibonacci sequence.
 */

int main() {
	//declare variables
	const int timePeriod = 5; //number of days between reproductions
	int days;                 //number of days
	int initialPop;           //starting number of organisms
	int num1;                 //Fibonacci variable for the i number
	int num2;                 //Fibonacci variable for calculating the next number
	int numNext;              //Fibonacci variable for the i + 1 number
	int outputTerms;          //number of terms to output
	char flag;                //stores info about whether loop should repeat
	char flag2;               //preserve original input to flag

	//loop
	do {

		//input
			//initialPop
		cout << "Enter the initial population: ";
		cin >> initialPop;
			//validate (no negatives)
		while (initialPop < 0) {
			cout << "\'" << initialPop << "\' is not a valid input. Please enter a positive number: ";
			cin >> initialPop;
		}
			//echo
		cout << "You entered " << initialPop;

			//days
		cout << "\n\nEnter the number of days: ";
		cin >> days;
			//validate (no negatives)
		while (days < 0) {
			cout << "\'" << days << "\' is not a valid input. Please enter a positive number: ";
			cin >> days;
		}
			//echo
		cout << "You entered " << days;

		//processing
			//calculate number of terms that will be in the output
		outputTerms = (days / timePeriod);

			//set num1 and num2 to initialPop
		num1 = initialPop;
		num2 = initialPop;

			//loop for applying Fibonacci to user input and outputting the result
		for (int i = 0; i <= outputTerms; i++) {
			//output first term
			if (i == 0) {
				cout << "\n\nPopulation growth:  " << num1;
				continue;
			}
			//output second term
			if (i == 1) {
				cout << ",  " << num2 << ",  ";
				continue;
			}

			//calculate i + 1 term
			numNext = num1 + num2;
			num1 = num2;
			num2 = numNext;

			//output i + 1 term
			cout << numNext;

			//comma after every number except the last one
			if (i < outputTerms) {
				cout << ",  ";
			}
		}

		//output
		if (days <= 10) {
			cout << "\n\nAfter " << days << " days, the population will still be to " << num1 << ".";
		}
		else {
			cout << "\n\nAfter " << days << " days, the population will have increased to " << numNext << ".";
		}

			//prompt for loop control
		cout << "\n\nWould you like to repeat the program? (Y or N): ";
		cin >> flag;
		flag2 = flag; //flag2 preserves the case of the user input for future reference
		flag = toupper(flag);

			//validate input
		while (flag != 'Y' && flag != 'N') {
			cout << "\'" << flag2 << "\' is not a valid input. Please enter \'Y\' or \'N\': ";
			cin >> flag;
			flag2 = flag;
			flag = toupper(flag);
		}

	} while (flag == 'Y');

	//goodbye
	cout << "\nThank you for using this program." << endl;
}