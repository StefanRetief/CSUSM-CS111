#include <iostream>
#include <fstream>
#include <string>
#include <iomanip>
using namespace std;

int main() {
	
	ifstream inputFile;
	ofstream outputFile;
	inputFile.open("car.txt");
	
	if (!inputFile) {
			cout << "Cannot open file.";
		}
		else {
			outputFile.open("cardat.dat");
			
			string model;
			double milesDriven;
			double gallonsOfGas;
			double mpg;
			double totalMilesDriven = 0;
			double totalGallonsOfGas = 0;
			double totalMpg = 0;
			double averageMpg;
			int counter = 0;
			
			inputFile >> model >> milesDriven >> gallonsOfGas;
			outputFile << setw(10) << left << "Model Name" << setw(20) << right << "Miles Driven";
			outputFile << setw(30) << right << "Gallons of Gas Used" << setw(10) << right << "MPG" << endl;
			
			while (inputFile) {
				mpg = milesDriven / gallonsOfGas;
				outputFile << setw(10) << left << model << setw(20) << right << setprecision(0) << fixed << milesDriven<< setw(30) << right << gallonsOfGas;
				outputFile << setw(10) << right << setprecision(2) << fixed << mpg << endl;
				totalMilesDriven += milesDriven;
				totalGallonsOfGas += gallonsOfGas;
				totalMpg += mpg;
				counter++;
				inputFile >> model >> milesDriven >> gallonsOfGas;
			}
			
			outputFile << "\nTotal Miles Driven: " << setprecision(0) << fixed << totalMilesDriven << " miles"<<  endl;
			outputFile << "Total Gallons of Gas Used: " << totalGallonsOfGas << " gallons" <<endl;
			outputFile << "Average MPG: " << setprecision(2) << fixed << totalMpg/counter << " miles per gallon";
			
			inputFile.close();
		}
	outputFile.close();
	return 0;
}