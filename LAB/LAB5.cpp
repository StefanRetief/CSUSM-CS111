/***********************************************/
/* PURPOSE:	finds the distance between points	*/
/*												*/
/* IMPLEMENTED BY: Stefan Retief				*/
/*												*/
/* USER INFORMATION: Input numbers for 		*/
/* points										*/
/*												*/
/* IMPLEMENTATION METHOD: Get the readings		*/
/* from user. Finds if the values or negative, */
/* 
/***********************************************/

#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;

int main() {
	
	int month;
	int current_reading;
	int previous_reading;
	int final_reading;
	int amount_over;
	double bill_amount;
	const double FLAT_RATE = 8.50;
	
	
	cout << "Input the month: " << endl;
	cin >> month;
	
	if ((month < 1) or (month > 12)) 
		cout << "\nThat is not a valid month. Please run again.";
		
	else {
		cout << "\nInput the current meter reading: ";
		cin >> current_reading;
	
		cout << "\nInput the previous meter reading: ";
		cin >> previous_reading;

		if ((current_reading < 0) or (previous_reading < 0))
			cout << "\nReadings should not be negative." << endl;
			
		else if (previous_reading > current_reading) 
			cout << "\nThe previous reading should not be larger than the current readng";
			
		else {
			final_reading = current_reading - previous_reading;
			
			if (final_reading < 400)
				cout << "You consumed " << final_reading << " and your amount due is " << setprecision(2) << fixed << FLAT_RATE << endl;
				
			else if ((final_reading > 400) and ((month >= 5) and (month <=8))) {
				amount_over = final_reading - 400;
				bill_amount = FLAT_RATE + (amount_over * 0.07525) + 0.005;
				cout << "\nYou consumed " << final_reading << " and your amount due is " << setprecision(2) << fixed << bill_amount << endl;
			}
			
			else if ((final_reading > 400) and ((month < 5) or (month > 8))) {
				amount_over =final_reading - 400;
				bill_amount = FLAT_RATE + (amount_over * 0.06575) + 0.005;
				cout << "\nYou consumed " << final_reading << " and your amount due is " << setprecision(2) << fixed << bill_amount << endl;
			}
	
		}
		
	}
	
	return 0;
}