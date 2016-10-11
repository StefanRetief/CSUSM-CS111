#include <iostream>
#include <fstream>
#include <string>
#include <iomanip>
using namespace std;

int main() {
	
	ifstream inputFile;
	ofstream outputFile;
	inputFile.open("student.txt");
	
	if (!inputFile) {
		cout << "Cannot open file.";
	}
	else {
		outputFile.open("results.dat");
		
		string firstName;
		string lastName;
		float test1;
		float test2;
		float test3;
		float total1 = 0;
		float total2 = 0;
		float total3 = 0;
		float counter = 0;
		float average1;
		float average2;
		float average3;
		
		inputFile >> firstName >> lastName >> test1 >> test2 >> test3;
		
		while (inputFile) {
			total1 += test1;
			cout << "Test 1 " << test1 << endl;
			total2 += test2;
			cout << "Test 2 " << test2 << endl;
			total3 += test3;
			cout << "Test 3 " << test3 << endl;
			counter++;
			cout << "counter " << counter << endl;
			inputFile >> firstName >> lastName >> test1 >> test2 >> test3;
			}
			
		average1 = total1 / counter;
		average2 = total2 / counter;
		average3 = total3 / counter;
		
		cout << average1 << endl;
		cout << average2 << endl;
		cout << average3 << endl;
		
		outputFile << "Test 1 average: " << setprecision(3) << fixed << average1 << endl;
		outputFile << "Test 2 average: " << average2 << endl;
		outputFile << "Test 3 average: " << average3 << endl;
			
		inputFile.close();
		}
	outputFile.close();
	return 0;
	}