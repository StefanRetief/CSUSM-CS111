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
#include <iomanip>
using namespace std;

int main() {
	
	//declare the variables
	char pkg;
	int minutes;
	const double MINUTES_PKG_A = 0.45;
	const double MINUTES_PKG_B = 0.40;
	const double PKG_A = 39.99;
	const double PKG_B = 59.99;
	const double PKG_C = 69.99;
	
	//display the packages
	cout << "Package A:  For $39.99 per month 450 minutes are provided. Additional minutes are $0.45 per minute." << endl;
	cout << "Package B:  For $59.99 per month 900 minutes are provided. Additional minutes are $0.40 per minute." << endl;
	cout << "Package C:  For $69.99 per month unlimited minutes provided." << endl;
	
	//ask user what package they have
	cout << "\nWhat package have you ordered?" << endl;
	cin.get(pkg);

	
	switch (pkg) {
		case 'A':
		case 'a':	cout << "\nHow many minutes were used?" << endl; //ask for minutes
					cin >> minutes;
					if (minutes < 0)	//minutes cannot be less than 0
						cout << "Minutes cannot be negative.";
					else if (minutes > 450)		//calculates if minutes are more than 450
						cout << "\nYour bill will be $" << fixed << setprecision(2) << ((minutes - 450) * MINUTES_PKG_A) + PKG_A << endl;
					else 	//calculates price if minutes less than 450
						cout << "\nYour bill will be $" << fixed << setprecision(2) << PKG_A << endl;
			break;
		case 'B':
		case 'b':	cout << "\nHow many minutes were used?" << endl; //ask for minutes
					cin >> minutes;
					if (minutes < 0)	//minutes cannot be less than 0
						cout << "Minutes cannot be negative.";
					else if (minutes > 900)	//calculates if minutes are more than 900
						cout << "\nYour bill will be $" << fixed << setprecision(2) << ((minutes - 900) * MINUTES_PKG_B) + PKG_B << endl;
					else	//calculates price if minutes less than 900
						cout << "\nYour bill will be $" << fixed << setprecision(2) << PKG_B << endl;
			break;
		case 'C':
		case 'c':	cout << "\nYour bill will be $" << PKG_C << endl; //No claculation needed for pkg C
			break;
		default: 	cout << "\nInvalid Package. Input A, B or C." << endl;
	}	
return 0;
}
