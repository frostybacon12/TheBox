#include "pch.h"
#include <iostream>
#include <string>
#include <fstream>

using namespace std;

/* Title: project5
 * By: Jake Hallstrom
 * Date: October 18, 2018
 * Lab: 10:00 AM
 * Description: User picks a file to read into two arrays of names, which are then searched for the names. Their ranks are printed.
 */

//function declaration
int search(string array[], int ARRAY_SIZE, string name);
//pre: initialize arrays and variables
//task: search the array for name
//post: return the index of name or -1 if not found

int main()
{
	//declare variables
	const int ARRAY_SIZE = 1000; //the size of the array
	ifstream inStream;           //opening stream variable
	string fileName;             //name of file to open
	string boys[ARRAY_SIZE];     //array of boy names
	string girls[ARRAY_SIZE];    //array of girl names
	string name;                 //name to search arrays for
	int boyIndex;                //location of name in boys array if found; -1 otherwise
	int girlIndex;               //location of name in girls array if found; -1 otherwise
	int n;                       //temporarily holds numbers while reading in the file
	char flag;                   //stores info about whether loop should repeat
	char flag2;                  //preserve original input to flag

	//loop
	do {

		//input
			//choose file
		cout << "Enter the name of the file you want to open: ";
		cin >> fileName;
		inStream.open(fileName); //try to open chosen file

			//validate chosen file's existence
		while (!inStream.is_open()) {
			cout << "\nThat file doesn't exist.\nEnter a valid file name: ";
			cin >> fileName;
			inStream.open(fileName); //try to open chosen file
		}

			//echo
		cout << fileName << " has been opened.";

			//enter name to be searched for
		cout << "\n\nEnter a name to search for: ";
		cin >> name;
		
			//first letter of name to uppercase
		name[0] = toupper(name[0]);

		//processing
			//fill the arrays with data from the file
		for (int i = 0; i < ARRAY_SIZE; i++) {
			inStream >> n >> boys[i] >> girls[i];
		}

		//search for name
		boyIndex = search(boys, ARRAY_SIZE, name);
		girlIndex = search(girls, ARRAY_SIZE, name);



		//output
			//boys
		if (boyIndex != -1) {
			cout << "\n\'" << name << "\' is ranked " << boyIndex << " in popularity among boys.";
		}
		else {
			cout << "\n\'" << name << "\' is not ranked among the top " << ARRAY_SIZE << " boy names.";
		}

		//girls
		if (girlIndex != -1) {
			cout << "\n\'" << name << "\' is ranked " << girlIndex << " in popularity among girls.";
		}
		else {
			cout << "\n\'" << name << "\' is not ranked among the top " << ARRAY_SIZE << " girl names.";
		}

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

		//close ifstream inStream
	inStream.close();
}

//search function
int search(string array[], int size, string name) {
	//declare variable
	int index;

	//loop to search the array for name
	for (int i = 0; i < size; i++) {

		//check to see if we found it
		if (array[i].compare(name) == 0) {
			index = i + 1; //found it
			break;
		}
		else {
			index = -1; //didn't find it
		}
	}

	//output
	return index;
}