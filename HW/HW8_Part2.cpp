/********************************************************************************************/
/* PURPOSE: To get the average number of days all employees were absent.                    */
/*                                                                                          */
/* IMPLEMENTED BY: Stefan Retief                                                            */
/*                                                                                          */
/* DATE: October 21, 2015						                                             */
/*                                                                                          */
/* USER INFORMATION: Compile and run. User inputs number of employees and number of absents */
/* for each employee.                                                                       */
/*                                                                                          */
/* IMPLEMENTATION METHOD: The program asks the user for the number of employees and days    */
/* for each employee. The program uses fuctions each question and for the calculation of the*/
/* average.										                                             */
/*                                                                                          */
/* OVERVIEW OF SUBPARTS: 						                                             */
/********************************************************************************************/
#include <iostream>
#include <iomanip>
using namespace std;

//prototype functions
int getEmployeeNumber();
int numberOfDaysAbsent(int);
double averageNumOfDays(int, int);

//main function that does the heavy lifting
int main() {
	
	//sets variables I will be using in this function
	int employeeNumber, daysAbsent;
	double average;
	
	//each variable will be getting their value from a function
	employeeNumber = getEmployeeNumber();
	daysAbsent = numberOfDaysAbsent(employeeNumber);
	average = averageNumOfDays(employeeNumber, daysAbsent);
	
	//display the final average after all the functions return
	cout << "The average number of days absent per employee is " << average << endl;
}

//This function gets the number of employees from the user.
int getEmployeeNumber() {
	
	//set variable for this function
	int number;
	
	cout << "Input the number of employees: ";
	cin >> number;
	
	//make sure there's no negative
	while (number < 1) {
		cout << "Invalid Number" << endl;
		cout << "Input the number of employees: ";
		cin >> number;
	}
	
	//return the value to the main function for storage
	return number;
	
}

//user input the number of days absent for each employee. Gets the number of employees from the main function
int numberOfDaysAbsent(int employeeNumber) {
	
	int counter = 1; //set a counter for the while loop to get all the number of days absent.
	int days;
	int total_days = 0;
	
	//performs a loop to get all the days for all the employees
	while (counter <= employeeNumber) {
		cout << "Input the number of days absent for employee " << counter << ": ";
		cin >> days;
		
		//makes sure there are no negative days.
		while (days < 0) {
			cout << "Invalid Number." << endl;
			cout << "Input the number of days absent for employee " << counter << ": ";
			cin >> days;
		}
		
		total_days += days;
		counter++;
	}
	
	//return the value to the main function for storage
	return total_days;
	
}

//thi function calculates the average number of day for all the employees.
double averageNumOfDays(int employees, int days) {
	
	//variable for function
	double average;
	
	//math.
	average = static_cast<double>(days) / static_cast<double>(employees);
	
	//returns final value to main for storage and output.
	return average;
}