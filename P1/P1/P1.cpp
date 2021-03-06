#include "pch.h"
#include <iostream>
#include <cmath>

using namespace std;

/* Title: project1
 * By: Jake Hallstrom
 * Date: September 6, 2018
 * Description: This project gets user input to calculate how long it will
 *              take an object to fall.
 */

int main() {
	//declare variables
	const int accel = 32; //The rate at which the object will gain speed.
	double distance; //How far an object falls
	double time; //How long the object will fall for

	//get input
	cout << "Enter time: ";
	cin >> time;

	//calculations
	distance = (accel * pow(time, 2)) / 2;

	//output
	cout << "The object will fall " << distance << " feet in " << time << " seconds.\n";
}