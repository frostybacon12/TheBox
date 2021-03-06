#include "pch.h"
#include <iostream>

using namespace std;

/* Title: project2
 * By: Jake Hallstrom
 * Date: September 20, 2018
 * Lab: 10:00 AM
 * Description: User enters hours worked and number of dependents, program calculates
 *              final pay after tax deductions and fees in addition to outputting a 
 * 				list of what has been withheld.
 */

int main() {
	//declare varibles
	const double otMultiplier = 1.5; //overtime multiplier
	const double minOTHours = 40;    //minimum overtime hours
	const int  minDependents = 3;    //minimum dependents
	const double ssTax = 0.06;       //social security tax rate
	const double fedTax = 0.14;      //federal tax rate
	const double stateTax = 0.05;    //state tax rate
	const double unionDues = 10;     //weekly union dues
	const double healthIns = 35;     //health insurance cost
	double payRate;                  //hourly pay rate
	double hoursWorked;              //weekly hours worked
	int dependents;                  //number of dependents
	double ssTaxW;                   //social security tax withheld
	double fedTaxW;                  //federal tax withheld
	double stateTaxW;                //state tax withheld
	double grossPay;                 //gross pay (before deductions)
	double finalPay;                 //final pay (after deductions)
	char flag;                       //stores info about whether loop should repeat
	char flag2;                      //preserve original input to flag

	//loop
	do {

		//get input
			//payRate
		cout << "\nEnter your houtly wage: ";
		cin >> payRate;
			//validate (no negatives)
		while (payRate < 0) {
			cout << "\'" << payRate << "\' is not a valid input. Please enter a positive number: ";
			cin >> payRate;
		}
			//echo
		cout << "You entered " << payRate;

			//hoursWorked
		cout << "\n\nEnter hours worked this week: ";
		cin >> hoursWorked;
			//validate (no negatives)
		while (hoursWorked < 0) {
			cout << "\'" << hoursWorked << "\' is not a valid input. Please enter a positive number: ";
			cin >> hoursWorked;
		}
			//echo
		cout << "You entered " << hoursWorked;

			//dependents
		cout << "\n\nEnter number of dependents: ";
		cin >> dependents;
			//validate (no negatives)
		while (dependents < 0) {
			cout << "\'" << dependents << "\' is not a valid input. Please enter a positive number: ";
			cin >> dependents;
		}
			//echo
		cout << "You entered " << dependents;

		//processing
			//grossPay
		if (hoursWorked <= minOTHours) {
			grossPay = (hoursWorked * payRate);
		}
		else {
			grossPay = (minOTHours * payRate + (hoursWorked - minOTHours) * payRate * otMultiplier);
		}

			//taxes withheld
		ssTaxW = (grossPay * ssTax);
		fedTaxW = (grossPay * fedTax);
		stateTaxW = (grossPay * stateTax);

			//finalPay
		finalPay = grossPay - ssTaxW - fedTaxW - stateTaxW - unionDues;

			//decide whether to subtract healthIns or not
		if (dependents >= minDependents) finalPay = finalPay - healthIns;

		//output
			//formatting
		cout.setf(ios::fixed);
		cout.setf(ios::showpoint);
		cout.precision(2);

			//grossPay
		cout << "\n\nGross pay: $" << grossPay;

			//withheld ammounts
		cout << "\n\nSocial Security tax withheld: $" << ssTaxW;
		cout << "\nState tax withheld: $" << stateTaxW;
		cout << "\nFederal tax withheld: $" << fedTaxW;
		cout << "\nUnion dues withheld: $" << unionDues;

			//decide whether to display healthIns deduction or not
		if (dependents >= minDependents) cout << "\nHealth insurance withheld: $" << healthIns;

			//finalPay
		cout << "\n\nFinal pay: $" << finalPay;

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

		//loop
	} while (flag == 'Y');

	//goodbye
	cout << "\nThank you for using this program." << endl;
}