#include "pch.h"
#include <iostream>
#include <cmath>

using namespace std;

/* Title: project4
 * By: Jake Hallstrom
 * Date: October 11, 2018
 * Lab: 10:00 AM
 * Description: User enters weight, intensity, time, and number 
 *      of calories in favorite food, program calculates the 
 *      number of servings of that food to eat to maintain the 
 *      current weight at the current activity level.
 */

//function declarations
double baseMetaRate(double weight);
//pre: initialize variable
//task: calculate base metabolism rate
//post: return the result

double calRequired(double weight, double intensity, double time);
//pre: initialize variables
//task: calculate number of calories required for the activity
//post: return the result

void energy(double &totalCal);
//pre: initialize variable
//task: calculate total energy needed
//post: totalCal will be equal to 110% of its original value

void calcServings(double &servings, double totalCal, double calFood);
//pre: initialize variables
//task: calculate the number of servings of a specific food are needed to reach the total calorie count
//post: servings will be equal to the new number of servings

void output(double servings, double totalCal);
//pre: initialize variable
//task: print the output
//post: the output will have been printed

int main()
{
	//declare variables
	double weight;       //weight of the user
	double intensity;    //difficulty of the activity
	double time;         //length in minutes of the activity
	int calFood;         //number of calories in the user’s favorite food
	double bmr;          //user’s base metabolism rate based on weight
	double servings = 0; //number of servings
	double totalCal;     //total number of calories
	char flag;           //stores info about whether loop should repeat
	char flag2;          //preserve original input to flag

	//loop
	do {

		//get input
			//weight
		cout << "Enter your weight in pounds: ";
		cin >> weight;
			//validate (no negatives)
		while (weight < 0) {
			cout << "\'" << weight << "\' is not a valid input. Please enter a positive number: ";
			cin >> weight;
		}
			//echo
		cout << "You entered " << weight;

			//intensity
		cout << "\nEnter the intensity of the activity: ";
		cin >> intensity;
			//validate (no negatives)
		while (intensity < 0) {
			cout << "\'" << intensity << "\' is not a valid input. Please enter a positive number: ";
			cin >> intensity;
		}
			//echo
		cout << "You entered " << intensity;

			//time
		cout << "\nEnter the time in minutes: ";
		cin >> time;
			//validate (no negatives)
		while (time < 0) {
			cout << "\'" << time << "\' is not a valid input. Please enter a positive number: ";
			cin >> time;
		}
			//echo
		cout << "You entered " << time;

			//calFood
		cout << "\nEnter the number of calories in your favorite food: ";
		cin >> calFood;
			//validate (no negatives)
		while (calFood < 0) {
			cout << "\'" << calFood << "\' is not a valid input. Please enter a positive number: ";
			cin >> calFood;
		}
			//echo
		cout << "You entered " << calFood;

		//processing
			//calculate bmr and total calories
		bmr = baseMetaRate(weight);
		totalCal = bmr + calRequired(weight, intensity, time);
		energy(totalCal);

			//calculate servings
		calcServings(servings, totalCal, calFood);

		//output
		output(servings, totalCal);

			//prompt for loop control
		cout << "\n\nWould you like to repeat the program? (Y or N): ";
		cin >> flag;
		flag2 = flag; //flag2 preserves the case of the given letter for future reference
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

//pass by value; return
//calculate the bse metabolism rate
double baseMetaRate(double weight)
{
	return (70 * pow((weight / 2.2), 0.756));
}

//pass by value; return
//calculate number of calories required for the activity
double calRequired(double weight, double intensity, double time)
{
	return (0.0385 * intensity * weight * time);
}

//pass by reference; void
//totalCal = 110% of old totalCal to account for cal used in metabolism
void energy(double &totalCal)
{
	totalCal += (totalCal * 0.1);
}

//pass by reference; void
//calculate number of servings
void calcServings(double &servings, double totalCal, double calFood)
{
	servings = (totalCal / calFood);
}

//void
//output
void output(double servings, double totalCal) 
{
	cout << "\n\nYou should eat " << servings << " servings (" << totalCal << " calories) of your favorite food to maintain your current weight." << endl;
}
