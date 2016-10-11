/********************************************************************************************/
/* PURPOSE: To find netpay and display gross, taxes and FICA using nested while loops.       */
/*                                                                                          */
/* IMPLEMENTED BY: Stefan Retief                                                            */
/*                                                                                          */
/* DATE: October 7, 2015						                                             */
/*                                                                                          */
/* USER INFORMATION: Compile and run. User inputs numbers and if the user wants to it again.*/
/*                                                                                          */
/* IMPLEMENTATION METHOD: The program asks for the employee number in a loop. The loop      */
/* commences as long as the number is not 0. In the loop, we ask for gross pay, FICA, and   */
/* taxes. They are calculated at the end of the loop to get netpay.                         */
/*                                                                                          */
/* OVERVIEW OF SUBPARTS: 						                                             */
/********************************************************************************************/
#include <iostream>
#include <iomanip>
using namespace std;

int main() {
	
	//declare variables
	int employeeNumber;
	double ficaWithholdings;
	double grossPay;
	double stateTax;
	double fedTax;
	double netPay;
	
	//asks user for emploee number
	cout << "Input the employee number: ";
	cin >> employeeNumber;
	
	//commence loop if value is less than 0
	while (employeeNumber > 0) {
		
		//asks for gross pay
		cout << "Input gross pay: ";
		cin >> grossPay;
		
		//make sure the value is postive and not greater than the gross pay with another loop
		while (grossPay < 0) {
			cout << "Value is invalid. Please try again.";
			cout << "\nInput gross pay: ";
			cin >> grossPay;
		
		}
		
		//if vlue is positive, ask for state tax
		cout << "Input state tax: ";
		cin >> stateTax;
		
		//make sure the value is positive and not greater than the gross pay with another loop
		while ((stateTax > grossPay) || (stateTax < 0)) {
			cout << "Value is invalid. Please try again.";
			cout << "\nInout state tax: ";
			cin >> stateTax;
		}
		
		//if the value is positive, ask for federal tax
		cout << "Input federal tax: ";
		cin >> fedTax;
		
		//make sure value is positive with another loop
		while ((fedTax > grossPay) || (fedTax < 0)) {
			cout << "Value is invalid. Please try again.";
			cout << "\nInput federal tax: ";
			cin >> fedTax;
		}
		
		//if value is positive, ask for FICA Withholdings
		cout << "Input FICA withholdings: ";
		cin >> ficaWithholdings;
		
		//make sure fica withholdings are positive  and not greater than the gross pay with another loop
		while ((ficaWithholdings > grossPay) || (ficaWithholdings < 0)) {
			cout << "Value is invalid. Please try again.";
			cout << "\nInput FICA withholdings: ";
			cin >> ficaWithholdings;
		}
		
		//if everything is positive and valid, we calculate the sum of taxes and FICA withholdings.
		//We check to see if the sum of the taxes and withholdings are greater than the gross pay.
		//leaves an error message if true, and leads to asking for employee number.
		if (grossPay < (fedTax + stateTax + ficaWithholdings)) {
			cout << "ERROR: Federal tax, state tax, and FICA Withholdings";
			cout << "\nare greater than gross pay. Please try again.";
		}
		//if false, we find the netpay by subtracting taxes and FICA withholdings from gross pay.
		else {
		netPay = grossPay - (fedTax + stateTax + ficaWithholdings);
		
		//display the results to two decimal places. DOES NOT ROUND.
		cout << "\n\n------------------------------" << endl;
		cout << setw(20) << left << "Employee Number:" << setw(10) << right << employeeNumber << endl;
		cout << setw(20) << left << "Gross pay:" << setw(10) << right << setprecision(2) << fixed << grossPay << endl;
		cout << setw(20) << left << "State Tax:" << setw(10) << right << stateTax << endl;
		cout << setw(20) << left << "Federal Tax:" << setw(10) << right << fedTax << endl;
		cout << setw(20) << left << "FICA Withholdings:" << setw(10) << right << ficaWithholdings << endl;
		cout << setw(20) << left << "Net Pay:" << setw(10) << right << netPay << endl;
		cout << "------------------------------\n" << endl;
		}
		
		//begin the loop again by asking for employee number
		cout << "Input employee number: ";
		cin >> employeeNumber;

	}
	
	return 0;
		
}

