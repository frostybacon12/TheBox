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
double baseMetaRate();
double calRequired();

int main()
{
	//declare variables
	double weight;
	double intensity;
	double time;


}

double baseMetaRate(double weight)
{
	return 70 * pow((weight / 2.2), 0.756);
}

double calRequired(double weight, double intensity, double time)
{
	return 0.0385 * intensity * weight * time;
}
