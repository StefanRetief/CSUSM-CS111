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

//set the size of the array with constants. Counted the number in the array before inputting these
const int R_SIZE = 12;
const int C_SIZE = 4;

int fillArray(int array[][C_SIZE]);
int getTotal(const int array[][C_SIZE]);
double getAverage(const int array[][C_SIZE], int, int);
int getRowTotal(const int array[][C_SIZE], const int []);
int getColumnTotal(const int array[][C_SIZE], const int []);
int getHighestInRow(const int array[][C_SIZE], const int []);
int getHighestInColumn(const int array[][C_SIZE], const int []);
int getLowestInRow(const int array[][C_SIZE], const int []);
int getLowestInColumn(const int array[][C_SIZE], const int []);

int main() {
	
	//open the file stream to read the numbers
	ifstream inputFile;
	inputFile.open("2Dnumbers.txt");
	
	//making sure we can open the file
	if (inputFile) {
		
		//variables
		int array[R_SIZE][C_SIZE];
		int numberOfNumbers;
		int total;
		double average;
		int rowTotal;
		int colTotal;
		int rowHighest;
		int colHighest;
		int rowLowest;
		int colLowest;
		int choice[6];
	
		//setting the variables to functions
		numberOfNumbers = fillArray(array);
		total = getTotal(array);
		average = getAverage(array, total, numberOfNumbers);
		
		//finding what the user wants. Used an array to store the options for later use.
		//while statements that the number the user inputs is within the range
		cout << "Input the row you want the total for (1-12): ";
		cin >> choice[0];
		
		while (choice[0] > R_SIZE || choice[0] < 1) {
			cout << "Invalid row." << endl;
			cout << "Input the row you want the total for (1-12): ";
			cin >> choice[0];
		}
		
		rowTotal = getRowTotal(array, choice);
		
		cout << "Input the column you want the total for (1-4): ";
		cin >> choice[1];
				
		while (choice[1] > C_SIZE || choice[1] < 1) {
			cout << "Invalid column." << endl;
			cout << "Input the column you want the total for (1-4): ";
			cin >> choice[1];
		}
				
		colTotal = getColumnTotal(array, choice);
		
		cout << "Input the row you want the highest for (1-12): ";
		cin >> choice[2];
		
		while (choice[2] > R_SIZE || choice[2] < 1) {
			cout << "Invalid row." << endl;
			cout << "Input the row you want the highest for (1-12): ";
			cin >> choice[2];
		}
			
		rowHighest = getHighestInRow(array, choice);
		
		cout << "Input the column you want the highest for (1-4): ";
		cin >> choice[3];
						
		while (choice[3] > C_SIZE || choice[3] < 1) {
			cout << "Invalid column." << endl;
			cout << "Input the column you want the highest for (1-4): ";
			cin >> choice[3];
		}
						
		colHighest = getHighestInColumn(array, choice);
		
		cout << "Input the row you want the lowest for (1-12): ";
		cin >> choice[4];
		
		while (choice[4] > R_SIZE || choice[4] < 1) {
			cout << "Invalid row." << endl;
			cout << "Input the row you want the lowest for (1-12): ";
			cin >> choice[4];
		}
		
		rowLowest = getLowestInRow(array, choice);
		
		cout << "Input the column you want the lowest for (1-4): ";
		cin >> choice[5];
							
		while (choice[5] > C_SIZE || choice[5] < 1) {
			cout << "Invalid column." << endl;
			cout << "Input the column you want the lowest for (1-4): ";
			cin >> choice[5];
		}
							
		colLowest = getLowestInColumn(array, choice);
		
		//present the user with all the results.
		cout << "The total of all the values is " << total << endl;
		cout << "The average of all the values is " << average << endl;
		cout << "The total for row " << choice[0] << " is " << rowTotal << endl;
		cout << "The total for column " << choice[1] << " is " << colTotal << endl;
		cout << "The highest value in row " << choice[2] << " is " << rowHighest << endl;
		cout << "The highest value in column " << choice[3] << " is " << colHighest << endl;
		cout << "The lowest value in row " << choice[4] << " is " << rowLowest << endl;
		cout << "The lowest value in column " << choice[5] << " is " << colLowest << endl;
		
	}	
	//just in case
	else
		cout << "Cannot find file.";
	
	inputFile.close();	
	return 0;
}

//fills array (duh)
int fillArray(int array[][C_SIZE]) {
	
	//open the file stream in the function
	ifstream inputFile;
	inputFile.open("2Dnumbers.txt");
	
	//set i to find how many numbers there are
	int i = 0;
	for (int row = 0; row < R_SIZE; row++) {
		for (int col = 0; col < C_SIZE; col++) {
			inputFile >> array[row][col];
			i++;
		}
	}
	inputFile.close();
	return i;
}

//get the total of the array
int getTotal(const int array[][C_SIZE]) {
	
	int total = 0;
	for (int row = 0; row < R_SIZE; row++) {
	   for (int col = 0; col < C_SIZE; col++)
	      total += array[row][col];
	}
	return total;
}

//find the average
double getAverage(const int array[][C_SIZE], int sum, int nOfn) {
	
	//we passed i from the previous funtion to this function
	int average;
	average = sum / nOfn;	
	return average;
}

//find the total for a specified row
int getRowTotal(const int array[][C_SIZE], const int c[]) {
	
	int choice = c[0] - 1;
	int total = 0;
	for (int col = 0; col < C_SIZE; col++) {
		total += array[choice][col];
	}
	return total;

}

//find the total for a specified column
int getColumnTotal(const int array[][C_SIZE], const int c[]) {
				
	int choice = c[1] - 1;
	int total = 0;
	for (int row = 0; row < R_SIZE; row++) {
		total += array[row][choice];
	}
	return total;
}

//find the highest in a specified row
int getHighestInRow(const int array[][C_SIZE], const int c[]) {
		
	int choice = c[2] - 1;
	int highest = array[choice][0];
	
	for (int col = 1; col < C_SIZE; col++) {
		if (highest < array[choice][col])
			highest = array[choice][col];
	}
	return highest;
}

//find the highest in a specfied column
int getHighestInColumn(const int array[][C_SIZE], const int c[]) {
		
	int choice = c[3] - 1;
	int highest = array[0][choice];
	
	for (int row = 1; row < R_SIZE; row++) {
		if (highest < array[row][choice])
			highest = array[row][choice];
	}
	return highest;
}

//find the lowst in a specified row
int getLowestInRow(const int array[][C_SIZE], const int c[]) {
		
	int choice = c[4] - 1;
	int lowest = array[choice][0];
	
	for (int col = 1; col < C_SIZE; col++) {
		if (lowest > array[choice][col])
			lowest = array[choice][col];
	}
	return lowest;
}

//find the lowest in a specified column
int getLowestInColumn(const int array[][C_SIZE], const int c[]) {
		
	int choice = c[5] - 1;
	int lowest = array[0][choice];
	
	for (int row = 1; row < R_SIZE; row++) {
		if (lowest > array[row][choice])
			lowest = array[row][choice];
	}
	return lowest;
}
