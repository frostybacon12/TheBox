#include "pch.h"
#include <iostream>

using namespace std;

int main()
{
	// typecasting
	int num1 = 5;
	double num2 = 6;
	
	static_cast<double>(num1); // change int to double
	static_cast<int>(num2); // change double to int

	// typedef
	typedef int* intPtr;
	intPtr b; // same as this:  int *b;

	typedef double dub;
	dub c; // same as this:  double c;

	// pointers
	double p = 5;
	double *point = NULL; // pointer to a double initialized to null
	double **point2 = NULL; // pointer to a pointer needs two asterisks; initialized to null

	point = &p; // take the address of p into point
	point2 = &point; // take the address of point into point2

	// output address of point
	cout << point2;

	// output address of p
	cout << "\n" << point; //point holds p's address
	cout << "\n" << *point2; // point2 is only dereferenced once

	// output value of p
	cout << "\n" << *point; // outputs the value of p (derefrencing)
	cout << "\n" << **point2; // also outputs the value of p (derefrences twice)

	// dynamic array allocation
	int *a; // could also use intPtr a;
	a = new int[10]; // memorry allocated for array

	// fill array
	for (int i = 0; i < 10; i++) {
		cout << "\nEnter number: ";
		cin >> a[i];
	}

	// delete pointers
	delete point; // dangling pointer problem: point is now pointing to a non-existent memory location
	delete point2;

	delete [] a; // delete dynamicly allocated array

	/*
	Big O

	quicksort. . . . . . .O(n log(n))
	bubble sort. . . . . .O(n^2)
	selection sort . . . .O(n^2)
	binary search tree . .O(log(n))    // big o for any kind of tree search
	mergesort. . . . . . .O(n log(n))


	*/

}