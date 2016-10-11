/********************************************************************************************/
/* PURPOSE: To make a bar chart that displays the appropriate number of * for each store    */
/*                                                                                          */
/* IMPLEMENTED BY: Stefan Retief                                                            */
/*                                                                                          */
/* DATE: October 7, 2015						                                             */
/*                                                                                          */
/* USER INFORMATION: Compile and run. User inputs numbers for each store.                   */
/*                                                                                          */
/* IMPLEMENTATION METHOD: The program asks the user for sales in each store. Calculates the */
/* the number of astricks by dividing by 100, and places an * for each $100 in the chart    */
/*                                                                                          */
/* OVERVIEW OF SUBPARTS: 						                                             */
/********************************************************************************************/
#include <iostream>
#include <iomanip>
using namespace std;

int main() {

	//declare variables
	int sales1;
	int sales2;
	int sales3;
	int sales4;
	int sales5;
	int calc1;
	int calc2;
	int calc3;
	int calc4;
	int calc5;
	int counter;
	
	//ask for sales of each store
	cout << "Enter today's sales for store 1: ";
	cin >> sales1;
	
	cout << "Enter today's sales for store 2: ";
	cin >> sales2;
		
	cout << "Enter today's sales for store 3: ";
	cin >> sales3;
	
	cout << "Enter today's sales for store 4: ";
	cin >> sales4;

	cout << "Enter today's sales for store 5: ";
	cin >> sales5;
	
	//calculates how man * are needed
	calc1 = sales1/100;
	calc2 = sales2/100;
	calc3 = sales3/100;
	calc4 = sales4/100;
	calc5 = sales5/100;
	
	//start the bar chart
	cout << "\nSALES BAR CHART" << endl;
	cout << "\n(Each * =$100" << endl;
	
	//displays the store and places * for each
	cout << "\nStore 1: ";
	for (counter = 0; calc1 > counter; counter++)
		cout << '*';
		
	cout << "\nStore 2: ";
	for (counter = 0; calc2 > counter; counter++)
		cout << '*';
	
	cout << "\nStore 3: ";
		for (counter = 0; calc3 > counter; counter++)
		cout << '*';
			
	cout << "\nStore 4: ";
		for (counter = 0; calc4 > counter; counter++)
		cout << '*';
	
	cout << "\nStore 5: ";
		for (counter = 0; calc5 > counter; counter++)
		cout << '*';
		
	return 0;
	
}