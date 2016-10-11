/***********************************************/
/* PURPOSE:	Compares numbers and finds the		*/
/* Largest										*/
/*												*/
/* IMPLEMENTED BY: Stefan Retief				*/
/*												*/
/* USER INFORMATION: Input numbers for 		*/
/* comparison									*/
/*												*/
/* IMPLEMENTATION METHOD: Compares each number	*/
/* and assigns the larger to the the variable	*/
/* largest.										*/
/***********************************************/

#include <iostream>
using namespace std;

int main() {
	int num1;
	int num2;
	int num3;
	int num4;
	int largest;
	
	cout << "Input a number: ";
	cin >> num1;
	
	cout << "\nInput another number: ";
	cin >> num2;
	
	cout << "\nInput a third number: ";
	cin >> num3;
	
	cout << "\nInput a fourth number: ";
	cin >> num4;
	
	if (num1 == num2 && num2 == num3 && num3 == num4) {
		cout << "\nAll these numbers are equal";
		return 0;
	}
	
	else if (num1 > num2)
		largest = num1;
	else
		largest = num2;
	
	if (num3 > largest) 
		largest = num3;
		
	if (num4 > largest)
		largest = num4;
	
	cout << largest << " is the largest number." << endl;
		
	return 0;
		
}