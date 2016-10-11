/***********************************************/
/* PURPOSE:	Converts centimeters to inches.		*/
/*												*/
/* IMPLEMENTED BY: Stefan Retief				*/
/*												*/
/* USER INFORMATION: Input a number for 		*/
/* centimeters									*/
/*												*/
/* IMPLEMENTATION METHOD: Divides CM by 2.54	*/
/* then divides and modulates the new inches 	*/
/* by 36in, 12in, and leaves the remainder		*/
/***********************************************/

#include <iostream>
using namespace std;

int main()
{
	//define the variables
	double centimeters;
	double inches;
	double inchesRounded;
	int yards;
	int feet;
	const double CONVERSION = 2.54;
	
	//outputs a message to ask for centimeters
	cout << "****************************************************************************\n";
	cout << "This program will convert a length in cetimeters to yards, feet, and inches.\n";
	cout << "****************************************************************************\n";
	cout << "\nPlease enter a length in centimeters: ";
	cin >> centimeters;
	
	//converts from centimeters for inches
	inches = centimeters / CONVERSION;
	inchesRounded = inches + 0.5;
	
	//outputs the conversion
	cout << "\n" << centimeters << " cm is about " << inches << " inches rounded to " << static_cast<int>(inchesRounded) << endl;
	
	//saves the inches
	int savedInches = inchesRounded;
	
	//converts inches to yards and feet
	yards = static_cast<int>(inchesRounded) / 36;
	inches = static_cast<int>(inchesRounded) % 36;
	feet = static_cast<int>(inchesRounded) / 12;
	inches = static_cast<int>(inchesRounded) % 12;
	
	//displays the final result
	cout << savedInches << " inches = " << yards << " yards, " << feet << " feet, and " << inches << " inches.";
	
	return 0;
	

}