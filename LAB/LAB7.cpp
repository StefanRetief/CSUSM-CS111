/********************************************************************************************/
/* PURPOSE: To ask the package and calculate that bill for each package as defined.         */
/*                                                                                          */
/* IMPLEMENTED BY: Stefan Retief                                                            */
/*                                                                                          */
/* DATE: September 30, 2015                                                                 */
/*                                                                                          */
/* USER INFORMATION: Compile and run. User inputs package and minutes.                      */
/*                                                                                          */
/* IMPLEMENTATION METHOD: The program checks the packages to make sure it is a valid package*/
/* Then does the appropriae math for each package.                                          */
/*                                                                                          */
/* OVERVIEW OF SUBPARTS: Part 1: Using conditional statements. Part 2: using switch.        */
/********************************************************************************************/
#include <iostream>
using namespace std;

int main() {
	
	double total = 0;
	int numOfAges = 0;
	double age;
	
	cout << "Enter age: ";
	cin >> age;
	
	while (age >= 0)
		{
			numOfAges++;
			total += age;
			cout << "Enter age: ";
			cin >> age;
		}
		
	if (numOfAges == 0)
		cout << "No ages were entered.";
	else
		cout << "The average age is: " << total / numOfAges;
	
}