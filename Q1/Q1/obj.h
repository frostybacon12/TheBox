#pragma once

using namespace std;

class obj
{
private:
	double a[10];
	int count;

public:

	void add(double input);
	/**
	 * @pre: variables are properly initialized
	 *
	 * @post: user input is added to the object
	 */

	int size();
	/**
	 * @pre: variables are properly initialized
	 *
	 * @post: the size is returned
	 */

	double last();
	/**
	 * @pre: variables are properly initialized
	 *
	 * @post: last value in the sequence is returned
	 */

	double sum();
	/**
	 * @pre: variables are properly initialized
	 *
	 * @post: the sum is calculated
	 *
	 * @returned: sum
	 */

	double mean();
	/**
	 * @pre: variables are properly initialized
	 *
	 * @post: the mean is calculated
	 *
	 * @returned: mean
	 */

	double min();
	/**
	 * @pre: variables are properly initialized
	 *
	 * @post: smallest value is found
	 *
	 * @returned: min
	 */

	double max();
	/**
	 * @pre: variables are properly initialized
	 *
	 * @post: largest value is found
	 *
	 * @returned: max
	 */

	void clear();
	/**
	 * @pre: variables are properly initialized
	 *
	 * @post: sequence is cleared
	 */

	obj();
	/**
	 * @pre: 
	 *
	 * @post: obj is created
	 */
};
