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

int main()
{
	//Declaring variables
	const double PERCENTAGE = 0.2;
	int adultTickets;
	int childTickets;
	double adultTicketPrice = 10.00; 
	double childTicketPrice = 6.00;
	double grossBoxProfit;
	double netBoxProfit;
	double amountToDistributor;
	string movieName;
	
	//Asks users for information.
	cout << "What is the name of the movie?\n";
	getline(cin, movieName);
	
	cout << "\nWhat is the amount of Adult tickets sold?\n";
	cin >> adultTickets;
	
	cout << "\nWhat is the amount of Child tickets sold?\n";
	cin >> childTickets;
	
	//Calculates Net and Gross Profit, and the amount for the distributor.
	grossBoxProfit = (adultTickets * adultTicketPrice) + (childTickets * childTicketPrice);
	netBoxProfit = PERCENTAGE * grossBoxProfit;
	amountToDistributor = grossBoxProfit - netBoxProfit;
	
	//Displays the information
	cout << left << setw(51) << "Movie Name:" << "\"" << movieName << "\"" << endl;
	cout << left << setw(51) << "Adult Tickets Sold:" << right << setw(10) << adultTickets << endl;
	cout << left << setw(51) << "Child Tickets Sold:" << right << setw(10) << childTickets << endl;
	cout << left << setw(50) << "Gross Box Office Profit:" << "$" << right << setw(10) << setprecision(2) << fixed << grossBoxProfit << endl;
	cout << left << setw(50) << "Net Box Office Profit:" << "$" << right << setw(10) << netBoxProfit << endl;
	cout << left << setw(50) << "Amount Paid to Distributor:" << "$" << right << setw(10) << amountToDistributor << endl;
	
	return 0;

}