/********************************************************************************************/
/* PURPOSE: To ask for two numbers and find the sum. Runs a loop asking to do it again      */
/*                                                                                          */
/* IMPLEMENTED BY: Stefan Retief                                                            */
/*                                                                                          */
/* DATE: October 5, 2015						                                             */
/*                                                                                          */
/* USER INFORMATION: Compile and run. User inputs numbers and if the user wants to it again.*/
/*                                                                                          */
/* IMPLEMENTATION METHOD: The program asks for two numbers, then adds them. Using a do-while*/
/* loop, the program asks the user is he would like to run it again.                        */
/*                                                                                          */
/* OVERVIEW OF SUBPARTS: 						                                             */
/********************************************************************************************/
#include <iostream>
using namespace std;

int main() {
	
	//define variables
	double a;
	double b;
	bool cont = true; 
	
	//start the do-while loop
	do {
		
		//input two numbers
		cout << "Input two numbers separated by a space (A B): ";
		cin >> a >> b;

		//shows the solution
		cout << "\n" << a << " + " << b << " = " << a + b << endl;
		
		//asks user if they would like to run again
		cout << "\nWould you like to perform this operation again? (Input 1 or 0): ";
		cin >> cont;
		
	} while (cont == true);		//only runs loop while 'cont' is true
	
	return 0;

}