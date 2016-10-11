#include <iostream>
#include <iomanip>
using namespace std;

int main() {
	
	double salary = 1;
	int days;
	int cur_day = 1;
	double dollar_amount;
	double total_pay;
	
	cout << "Input the amount of days you worked: ";
	cin >> days;
	
	do {
		
		while (days < 0) {
			cout << "Invalid number. Please try again." << endl;
			cout << "Input the amount of days you worked: ";
			cin >> days;
			
		}
		
		total_pay += salary;
		cout << "Day " << setw(5) << left << cur_day << "Amount paid: " << setw(5) << right << salary << endl;
		cur_day++;
		days--;
		salary = salary * 2;
		
		
	} while (days > 0);
	
	cur_day--;
	
	cout << "-------------------------------------" << endl;
	cout << "Total Paid for " << cur_day << " days: " << total_pay << " pennies" << endl;
	
	total_pay /= 100;
	cout << "Total Paid for " << cur_day << " days: $" << setprecision(2) << fixed << total_pay;
	
	
	return 0;
}