/********************************************************************************************/
/* PURPOSE: To read numbers from a file into an array, find the lowest, highest, sum and    */
/*          and average.                                                                    */
/*                                                                                          */
/* IMPLEMENTED BY: Stefan Retief                                                            */
/*                                                                                          */
/* DATE: Novemeber 9, 2015						                                             */
/*                                                                                          */
/* USER INFORMATION: Compile and run.                                                       */
/*                                                                                          */
/* IMPLEMENTATION METHOD: The program reads a file and inputs the data into an array. The   */
/* array is sent to functions to find the min, max, sum and average.                        */
/*                                                                                          */
/* OVERVIEW OF SUBPARTS: 						                                             */
/********************************************************************************************/

#include <iostream>
#include <fstream>
using namespace std;

//declare the variables
int readNumbers(int [], int);
int getLowest(const int [], int);
int getHighest(const int [], int);
double getSum(const int [], int);
double getAverage(double, int);

int main() {
	
	//open ifstream
	ifstream inputFile;
	inputFile.open("numbers.txt");
	
	//if it's true, do it!
	if (inputFile) {
		
		//variables
		const int SIZE = 100;
		int numbers [SIZE];
		int newSize;
		int lowest;
		int highest;
		double sum;
		double average;
		
		//the functions where we send the array and the size of the array.
		newSize = readNumbers(numbers, SIZE);
		lowest = getLowest(numbers, newSize);
		highest = getHighest(numbers, newSize);
		sum = getSum(numbers, newSize);
		average = getAverage(sum, newSize);
		
		//output after all the functions
		cout << "The number of numbers is " << newSize << endl;
		cout << "The highest number is " << highest << endl;
		cout << "The lowest number is " << lowest << endl;
		cout << "The sum of all the numbers is " << sum << endl;
		cout << "The average is " << average << endl;
	}
	else 
		cout << "Unable to find file.";
		
	inputFile.close();
	return 0;
}

//input the numbers from the file into the array
int readNumbers(int numbers[], int nOfn) {
	
	ifstream inputFile;
	inputFile.open("numbers.txt");
	
	int i = 0;
	
	if (inputFile) {
		
		//array size is 100, here we find the right number of values.
		inputFile >> numbers[0];
		while (inputFile && i < 100) {
			i++;
			inputFile >> numbers[i];
		}
	}
	//just in case
	else
		cout << "Unable to find file.";
		
	inputFile.close();
	return i;
}

//find the lowest number in the array.
int getLowest(const int numbers[], int nOfn) {
	
	//set the lowest variable to the first number in the array
	int lowest = numbers[0];
	
	//compare each value in the array
	for (int i = 0; i < nOfn; i++) {
		if (lowest > numbers [i])
			lowest = numbers[i];
	}
	//return the value
	return lowest;
}

//find the highest value
int getHighest(const int numbers[], int nOfn) {
	
	//set the first value in the array to the variable
	int highest = numbers[0];
	
	//compare each value in the array
	for (int i = 0; i < nOfn; i++) {
		if (highest < numbers [i])
			highest = numbers[i];
	}
	//return the highest
	return highest;
}

//find the sum
double getSum(const int numbers[], int nOfn) {
	
	//set the sum to 0 to start adding
	double sum = 0;
	
	//add all the numbers in the array
	for (int i = 0; i < nOfn; i++) {
		sum += numbers[i];
	}
	//return the sum
	return sum;
}

//find the average
double getAverage(double total, int nOfn) {
	
	double average;
	average = total / nOfn;
	return average;
	
}