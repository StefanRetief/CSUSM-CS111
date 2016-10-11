#include <iostream>
#include <string>
#include <iomanip>
using namespace std;

void getCustomerInfo(int&, int&, int&, int&, char&);
void getItemsInfo(int&, double&);
double calcDiscount(double, int);
double calcSalesTax(double, char);
double calcShipping(int);
void outputInvoice(int, char, int, int, int, double, double, double, double, double);

int main() {
	int month, day, year, totalWeight = 0, account;
	char countyCode;
	double totalSale, discount, salesTax, totalDue, shippingCost;
	
	getCustomerInfo(account, month, day, year, countyCode);
	getItemsInfo(totalWeight, totalSale);
	discount = calcDiscount(totalSale, month);
	totalDue = totalSale -  discount;
	salesTax = calcSalesTax(totalDue, countyCode);
	totalDue += salesTax;
	shippingCost = calcShipping(totalWeight);
	totalDue += shippingCost;
	outputInvoice(account, countyCode, month, day, year, totalSale, discount, salesTax, shippingCost, totalDue);
	
}

void getCustomerInfo(int &account, int &month, int &day, int &year, char &countyCode) {
	
	cout << "Input account number: ";
	cin >> account;
	
	while (account < 0) {
		cout << "Invalid Number." << endl;
		cout << "Input account number: ";
		cin >> account;
	}
	
	cout << "Input month: ";
	cin >> month;
	
	while (month < 1 || month > 12) {
		cout << "Invalid month." << endl;
		cout << "Input month: ";
		cin >> month;
	}
	
	cout << "Input day: ";
	cin >> day;
	
	while (day <= 0 || day > 31) {
		cout << "Invalid day." << endl;
		cout << "Input day: ";
		cin >> day;
	}
	
	cout << "Input year: ";
	cin >> year;
	
	while (year < 1900 || year > 2100) {
		cout << "Invalid year." << endl;
		cout << "Input year: ";
		cin >> year;
	}
	
	cout << "\nCounty codes: San Diego = S, Orange County = O, Los Angeles = L" << endl;
	cout << "Input county Code: ";
	cin >> countyCode;
	
	bool valid;
	
	switch(countyCode) {
		case 'S' :
		case 's' :
		case 'o' :
		case 'O' :
		case 'l' :
		case 'L' : valid = true;
		break;
		default : valid = false;
	}
	
	while (!valid) {
		cout << "Invalid county code." << endl;
		cout << "Input county code: ";
		cin >> countyCode;
		
		switch(countyCode) {
			case 'S' :
			case 's' :
			case 'o' :
			case 'O' :
			case 'l' :
			case 'L' : valid = true;
			break;
			default : valid = false;
		}
		
	}
	
}

void getItemsInfo(int &totalWeight, double &totalSale) {
	
	double price;
	int weight;
	char choice;
	bool valid;
	
	totalWeight = 0;
	totalSale = 0;
	
	cout << "Do you want to order an item? Enter Y or N: ";
	cin >> choice;
	
	switch (choice) {
		case 'Y' :
		case 'y' :
		case 'N' :
		case 'n' : valid = true;
		break;
		default : valid = false;
	}
	
	while (valid == false) {
		cout << "Invalid response." << endl;
		cout << "Do you want to order an item? Enter Y or N: ";
		cin >> choice;
		
		switch (choice) {
			case 'Y' :
			case 'y' :
			case 'N' :
			case 'n' : valid = true;
			break;
			default : valid = false;
		}
	}
	
	while (choice == 'Y' || choice == 'y') {
		cout << "Enter the price: ";
		cin >> price;
		
		while (price < 0) {
			cout << "Invalid price." << endl;
			cout << "Enter the price: ";
			cin >> price;
		}
		
		totalSale += price;
		price = -1;
		
		cout << "Enter a weight: ";
		cin >> weight;
		
		while (weight < 0) {
			cout << "Invalid weight." << endl;
			cout << "Enter a weight: ";
			cin >> weight;
		}
		
		totalWeight += weight;
		
		cout << "Do you want to order another item? Enter Y or N: ";
		cin >> choice;
	}
	
}

double calcDiscount(double totalSale, int month) {
	
	double discount;
	
	if (month <= 5) 
		discount = totalSale * 0.05;
	else if (month >= 6 && month <= 8)
		discount = totalSale * 0.1;
	else
		discount = totalSale * 0.15;
	
	return discount;
	
}

double calcSalesTax(double sale, char countyCode) {
	
	double salesTax;
	switch (countyCode) {
		case 's' :
		case 'S' : salesTax = sale * 0.0775;
		case 'o' :
		case 'O' : salesTax = sale * 0.0775;
		break;
		case 'l' :
		case 'L' : salesTax = sale * 0.0825;
		break;
	}
		
	return salesTax;
}

double calcShipping(int weight) {
	
	double cost;
	
	if (weight == 0)
		cost = 0;
	else if (weight > 0 && weight <= 25)
		cost = 5;
	else if (weight >= 26 && weight <= 50)
		cost = 5 + ((weight - 25) * 0.1);
	else
		cost = 5 + (25 * 0.1) + ((weight - 50) * 0.07);
		
	return cost;
	
}

void outputInvoice(int account, char countyCode, int month, int day, int year, double totalSale, double discount, double salesTax, double shipping, double totalDue) {
	
	string county;
	
	switch(countyCode) {
			case 'S' :
			case 's' : county = "SAN DEIGO";
			break;
			case 'o' :
			case 'O' : county = "ORANGE COUNTY";
			break;
			case 'l' : 
			case 'L' : county = "LOS ANGELES";
			break;
		}
		
	cout << setw(20) << left << "\nACCOUNT NUMBER" << setw(20) << right << "COUNTY" << endl;
	cout << setw(20) << left << account << setw(20) << right << county << endl;
	cout << setw(32) << left << "\nDATE OF SALE: " << setprecision(2) << month << "/" << day << "/" << setprecision(4) << year << endl;
	cout << setw(21) << left << "\nTOTAL SALE AMOUNT:" << "$" << setw(19) << right << setprecision(2) << fixed << totalSale << endl;
	cout << setw(20) << left << "DISCOUNT:" << "$" << setw(19) << right << discount << endl;
	cout << setw(20) << left << "SALES TAX:" << "$" << setw(19) << right << salesTax << endl;
	cout << setw(20) << left << "SHIPPING:" << "$" << setw(19) << right << shipping << endl;
	cout << setw(20) << left << "TOTAL DUE:" << "$" << setw(19) << right << totalDue << endl;
	
}