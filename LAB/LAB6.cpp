/********************************************************************************************/
/* PURPOSE: Asks for the number of movie tickets sold (adult and child) and calculates      */
/* a theater's gross and net box office profit for a night. Also asks for movie name.       */
/*                                                                                          */
/* IMPLEMENTED BY: Stefan Retief                                                            */
/*                                                                                          */
/* DATE: September 21, 2015                                                                 */
/*                                                                                          */
/* USER INFORMATION: Compile and run. User inputs movie name, tickets sold (adult and child)*/
/* and the amount of money earned for the night.                                            */
/*                                                                                          */
/* IMPLEMENTATION METHOD: The Gross amount is calculated by multiplying the correct amount  */
/* of adult and child tickes with their respective prices. The gross amount is multiplied by*/
/* 20 % and that amount is kept as net amount. The Amount paid to distributor is the the    */
/* amount multiplied by 20 %                                                                */
/*                                                                                          */
/* OVERVIEW OF SUBPARTS:     					                                             */
/********************************************************************************************/
#include <iostream>
#include <string>
#include <iomanip>
using namespace std;

int main() {
	
	int month;
	
	cout << "Input the month (1-12)" << endl;
	cin >> month;
	
	switch (month) {
	case 3:
	case 4:
	case 5: cout << "\nThe season is Spring.";
			break;
	case 6:
	case 7:
	case 8: cout << "\nThe season is Summer.";
			break;
	case 9:
	case 10:
	case 11: cout << "\nThe season is Fall.";
			break;
	case 12:
	case 1:
	case 2: cout << "\nThe season is Winter.";
			break;
	default:	cout << "\nInvalid Month";
	}
}