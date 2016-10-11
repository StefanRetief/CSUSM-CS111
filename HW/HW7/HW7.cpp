/********************************************************************************************/
/* PURPOSE: To open a file, read the data, and calculate the number of numbers, total of    */
/* all the numbers and the average and write them to a new file                             */
/*                                                                                          */
/* IMPLEMENTED BY: Stefan Retief                                                            */
/*                                                                                          */
/* DATE: October 14, 2015						                                             */
/*                                                                                          */
/* USER INFORMATION: Compile and run. The program will write a new file with the data       */
/*                                                                                          */
/* IMPLEMENTATION METHOD: The program grabs the file that is names "random.txt" and reads   */
/* the data. It then takes the data and does calculations to find the number of numbers     */
/* using a while loop, adds all the number up, and divides it by the numOfNums to get the   */
/* average. Finally, it writes the new data to a new file it creats called "output.txt"     */
/*                                                                                          */
/* OVERVIEW OF SUBPARTS: 						                                             */
/********************************************************************************************/
#include <iostream>
#include <fstream>
using namespace std;

int main() {
	
	ifstream inputFile;
	ofstream outputFile;
	inputFile.open("random.txt");
	
	if (!inputFile)	{
		cout << "Cannot open file." << endl;
	}
	else {
		outputFile.open("output.txt");
		
		int total = 0;
		int numOfNums = 0;
		int average;
		int num;
		
		inputFile >> num;
		while (inputFile) {
			total += num;
			numOfNums++;
			inputFile >> num;
		}
		if (numOfNums != 0) {
			average = total/numOfNums;
			outputFile << "Number of numbers in this file: " << numOfNums << endl;
			outputFile << "Total of all numbers : " << total << endl;
			outputFile << "Average: " << average;
		}
		else {
			outputFile << "There were no number in this file.";
		}
		inputFile.close();
	}
	outputFile.close();
	return 0;
}