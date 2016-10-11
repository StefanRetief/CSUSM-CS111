/***********************************************/
/* PURPOSE:	Creates a receipt with one item	.	*/
/*												*/
/* IMPLEMENTED BY: Stefan Retief				*/
/*												*/
/* USER INFORMATION: Input a name, item and 	*/
/* price.										*/
/*												*/
/* IMPLEMENTATION METHOD: Collects input and	*/
/* calculates sales tax by multiplying by 7.75 */
/* then adds it to the item price to get total.*/
/* Formats the receipt with setw.				*/
/***********************************************/

#include <iostream>
#include <string>
#include <iomanip>
using namespace std;

int main()
{
	//define variables
	string name;
	string date;
	string itemName;
	const double TAX = 0.0775;
	double price;
	double salesTax;
	double total;
	
	//Asks user for input for name, date, item name, and price.
	cout << "Enter sales person's name: ";
	getline(cin, name);
	
	cout << "\nEnter today's date (mm/dd/yy): ";
	getline(cin, date);
	
	cout << "\nEnter the item name: ";
	cin >> itemName;
	
	cout << "\nEnter the price of the item: ";
	cin >> price;
	
	//calculates sales tax and total
	salesTax = price * TAX;
	total = salesTax + price;
	
	//displays the final receipt with correct formatting
	cout << "\n-------------------------------" << endl;
	cout << "\n\"Your Friently Neighbor Store\"\n";
	cout << "\n" << setw(30) << right << date << endl;
	cout << setw(30) << right << name << endl;
	cout << "\n" << setw(19) << left << itemName << "$" << setw(10) << right << fixed << setprecision(2) << price << endl;
	cout << setw(19) << left << "Sales Tax" << "$" << setw(10) << right << salesTax << endl;
	cout << setw(19) << left << "Total" << "$" << setw(10) << right << total << endl;
	cout << "\n-------------------------------" << endl;
	cout << "Thank you for shopping with us!";
	 
return 0;
}