#include "pch.h"
#include <iostream>
#include <cmath>

using namespace std;

/* Title: project4
 * By: Jake Hallstrom
 * Date: October 11, 2018
 * Lab: 10:00 AM
 * Description:
 */

//function declarations
double baseMetaRate(double weight);
double calRequired(double weight, double intensity, double time);
void energy(double &totalCal);
void calcServings(double &servings, double totalCal, double calFood);
void output(double servings, double totalCal);

int main()
{
	//declare variables
	double weight;
	double intensity;
	double time;
	int calFood;
	double bmr;
	double servings = 0;
	double physActivity;
	double totalCal;

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
	bmr = baseMetaRate(weight);
	physActivity = calRequired(weight, intensity, time);

		//calculate total calories
	totalCal = bmr + physActivity;
	energy(totalCal);

		//calculate servings
	calcServings(servings, totalCal, calFood);

	//output
	output(servings, totalCal);


}

//pass by value; return
double baseMetaRate(double weight)
{
	return (70 * pow((weight / 2.2), 0.756));
}

//pass by value; return
double calRequired(double weight, double intensity, double time)
{
	return (0.0385 * intensity * weight * time);
}

//pass by reference; void
void energy(double &totalCal)
{
	totalCal += (totalCal * 0.1);
}

//pass by reference; void
void calcServings(double &servings, double totalCal, double calFood)
{
	servings = (totalCal / calFood);
}

//void function
void output(double servings, double totalCal) 
{
	cout << "\n\nYou should eat " << servings << " servings (" << totalCal << " calories) of your favorite food to maintain your current weight." << endl;
}
