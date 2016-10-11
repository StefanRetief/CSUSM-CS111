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
	double minutes_charged;
	double bill;
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
	
	//check if the package is valid
	if ((pkg != 'A' and pkg != 'a') and (pkg != 'B' and pkg != 'b') and (pkg != 'C' and pkg != 'c'))
		cout << "\nInvalid Package. Input A, B or C." << endl;
	
	//If the package is C, there is no additional charge for minutes
	else if (pkg == 'C' or pkg == 'c') {
			cout << "Your bill will be $" << PKG_C << endl;
	}
	
	//Condition if the pkg is A or B
	else {
		
		cout << "\nHow many minutes were used?" << endl;
		cin >> minutes;
		
		//checks that minutes or not less than 0
		if (minutes < 0)
			cout << "Minutes cannot be negative."; 
		
		//caculates minutes for pkg A and displays
		else if (pkg == 'A' or pkg == 'a') {
			if (minutes > 450) {
				minutes = minutes - 450;
				minutes_charged = minutes * MINUTES_PKG_A;
				bill = minutes_charged + PKG_A;
				cout << "Your bill will be $" << fixed << setprecision(2) << bill << endl;
			}
			else 
				cout << "Your bill will be $" << PKG_A << endl;
		}
		
		//calculates minutes for pkg B	and displays
		else if (pkg == 'B' or pkg == 'b') {
			if (minutes > 900) {
				minutes = minutes - 900;
				minutes_charged = minutes * MINUTES_PKG_B;
				bill = minutes_charged + PKG_B;
				cout << "Your bill will be $" << fixed << setprecision(2) << bill << endl;
			}
			else
				cout << "Your bill will be $" << PKG_B << endl;
		}
	}
	return 0;
}