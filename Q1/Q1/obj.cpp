#include "pch.h"
#include <iostream>
#include <string>
#include "obj.h"

//add
void obj::add(double input)
{
	a[count] = input;
	count++;
}

//size
int obj::size()
{
	return count;
}

//last
double obj::last()
{
	if (count == 0) return 0;
	return a[count-1];
}

//sum
double obj::sum()
{
	if (count == 0) return 0;

	double sum = 0;
	for (int i = 0; i < count; i++) {
		sum += a[i];
	}
	return sum;
}

//mean
double obj::mean()
{
	if (count == 0) return 0;

	double sum = 0;
	double mean = 0;
	for (int i = 0; i < count; i++) {
		sum += a[i];
	}
	mean = sum / count;
	return mean;
}

//min
double obj::min()
{
	if (count == 0) return 0;

	double min = a[0];
	for (int i = 0; i < count; i++) {
		if (a[i] < min) {
			min = a[i];
		}
	}
	return min;
}

//max
double obj::max()
{
	if (count == 0) return 0;

	double max = a[0];
	for (int i = 0; i < count; i++) {
		if (a[i] > max) {
			max = a[i];
		}
	}
	return max;
}

//clear
void obj::clear()
{
	count = 0;
	cout << "\nThe sequence has been cleared.";
}

//default
obj::obj()
{
	for (int i = 0; i < 10; i++) {
		a[i] = 0;
	}

	count = 0;
}
