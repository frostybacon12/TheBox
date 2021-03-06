#include "pch.h"
#include <iostream>
#include "obj.h"

int main()
{
   //declarations
	obj empty; //obj object with no data
	obj single; //obj object with one input
	obj inc; //obj object with ascending data
	obj dec; //obj object with decending data
	obj rand; //data members are random
	obj cons; //all data members are the same value
	obj zero; //obj that sums to 0
	double size, last, sum, mean, min, max; //store return values for functions of the objs

	//testing
	//test 1
	cout << "Test 1: Empty Sequence\n";

	size = empty.size(); //size
	last = empty.last(); //last
	sum = empty.sum(); //sum
	mean = empty.mean(); //mean
	min = empty.min(); //min
	max = empty.max(); //max

	cout << "\nSize: " << size;
	cout << "\nLast: " << last;
	cout << "\nSum:  " << sum;
	cout << "\nMean: " << mean;
	cout << "\nMin:  " << min;
	cout << "\nMax:  " << max;

	//test 2
	cout << "\n\nTest 2: Single Input Sequence\n";

	single.add(1.23);

	size = single.size();
	last = single.last();
	sum = single.sum();
	mean = single .mean();
	min = single.min();
	max = single.max();

	cout << "\nSize: " << size;
	cout << "\nLast: " << last;
	cout << "\nSum:  " << sum;
	cout << "\nMean: " << mean;
	cout << "\nMin:  " << min;
	cout << "\nMax:  " << max;

	//test 2.1
	cout << "\n\nTest 2.1: Single Input Sequence (cleared)\n";

	single.clear();

	size = single.size();
	last = single.last();
	sum = single.sum();
	mean = single.mean();
	min = single.min();
	max = single.max();

	cout << "\n\nSize: " << size;
	cout << "\nLast: " << last;
	cout << "\nSum:  " << sum;
	cout << "\nMean: " << mean;
	cout << "\nMin:  " << min;
	cout << "\nMax:  " << max;

	//test 3
	cout << "\n\nTest 3: Ascending Input Sequence\n";

	inc.add(1.23);
	inc.add(2.34);
	inc.add(3.45);

	size = inc.size();
	last = inc.last();
	sum = inc.sum();
	mean = inc.mean();
	min = inc.min();
	max = inc.max();

	cout << "\nSize: " << size;
	cout << "\nLast: " << last;
	cout << "\nSum:  " << sum;
	cout << "\nMean: " << mean;
	cout << "\nMin:  " << min;
	cout << "\nMax:  " << max;

	//test 4
	cout << "\n\nTest 4: Decending Input Sequence\n";

	dec.add(3.45);
	dec.add(2.34);
	dec.add(1.23);

	size = dec.size();
	last = dec.last();
	sum = dec.sum();
	mean = dec.mean();
	min = dec.min();
	max = dec.max();

	cout << "\nSize: " << size;
	cout << "\nLast: " << last;
	cout << "\nSum:  " << sum;
	cout << "\nMean: " << mean;
	cout << "\nMin:  " << min;
	cout << "\nMax:  " << max;

	//test 5
	cout << "\n\nTest 5: Random Sequence\n";

	rand.add(4.56);
	rand.add(5.67);
	rand.add(3.45);

	size = rand.size();
	last = rand.last();
	sum = rand.sum();
	mean = rand.mean();
	min = rand.min();
	max = rand.max();

	cout << "\nSize: " << size;
	cout << "\nLast: " << last;
	cout << "\nSum:  " << sum;
	cout << "\nMean: " << mean;
	cout << "\nMin:  " << min;
	cout << "\nMax:  " << max;

	//test 6
	cout << "\n\nTest 6: Constant Sequence\n";

	cons.add(3.33);
	cons.add(3.33);
	cons.add(3.33);

	size = cons.size();
	last = cons.last();
	sum = cons.sum();
	mean = cons.mean();
	min = cons.min();
	max = cons.max();

	cout << "\nSize: " << size;
	cout << "\nLast: " << last;
	cout << "\nSum:  " << sum;
	cout << "\nMean: " << mean;
	cout << "\nMin:  " << min;
	cout << "\nMax:  " << max;

	//test 6
	cout << "\n\nTest 6: Sequence That Adds to Zero\n";

	zero.add(0);
	zero.add(3.33);
	zero.add(-3.33);

	size = zero.size();
	last = zero.last();
	sum = zero.sum();
	mean = zero.mean();
	min = zero.min();
	max = zero.max();

	cout << "\nSize: " << size;
	cout << "\nLast: " << last;
	cout << "\nSum:  " << sum;
	cout << "\nMean: " << mean;
	cout << "\nMin:  " << min;
	cout << "\nMax:  " << max;
}