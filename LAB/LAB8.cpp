/********************************************************************************************/
/* PURPOSE: To ask the package and calculate that bill for each package as defined.         */
/*                                                                                          */
/* IMPLEMENTED BY: Stefan Retief                                                            */
/*                                                                                          */
/* DATE: September 30, 2015                                                                 */
/*                                                                                          */
/* USER INFORMATION: Compile and run. User inputs package and minutes.                      */
/*                                                                                          */
/* IMPLEMENTATION METHOD: The program checks the packages to make sure it is a valid package*/
/* Then does the appropriae math for each package.                                          */
/*                                                                                          */
/* OVERVIEW OF SUBPARTS: Part 1: Using conditional statements. Part 2: using switch.        */
/********************************************************************************************/
#include <iostream>
using namespace std;

int main() {
	
	double total = 0;
	int numOfNums = 0;
	int num;
	int odd = 0;
	int even = 0;
	
	cout << "Enter Number: ";
	cin >> num;
	
	while (num != 0)
		{
			numOfNums++;
			total += num;
			
				if (num % 2 == 1 or num % 2 == -1)
					{
					cout << num << " is odd." << endl;
					odd++;
					}
				else	{
					cout << num << " is even." << endl;
					even++;
					}
				
			cout << "Enter Number: ";
			cin >> num;
		}
		
	if (numOfNums == 0)
		cout << "No numbers were entered.";
	else	{
		cout << odd << " odd numbers" << endl;
		cout << even << " even numbers" << endl;
		cout << "The average age is: " << total / numOfNums;
		}
}