#include <iostream>
#include <fstream>
#include <iomanip>
using namespace std;

const int MAX_EMP = 100;
struct Employee {
	string fName, lName;
	char gender;
	double rate;
	int empId;
	int age;
};

int readData(Employee []);
void findMale(const Employee [], const int);
void findEmployee(const Employee [], const int);
Employee findOldest(const Employee [], const int);
void printEmployee(const Employee);

int main() {
	int actEmp;
	Employee empAr[MAX_EMP];
	Employee oldest;
	
	actEmp = readData(empAr);
	if (actEmp == 0)
		return 0;
		
	findMale(empAr, actEmp);
	findEmployee(empAr, actEmp);
	oldest = findOldest(empAr, actEmp);
	cout << "The oldest employee is: " << oldest.fName << endl;
	printEmployee(oldest);
}
	

int readData(Employee empAr[]) {
	
	ifstream inputFile;
	inputFile.open("Employees.dat");
	
	if (!inputFile) {
		cout << "Cannot find file.";
		return 0;
	}
	else {
		int i = 0;
		inputFile >> empAr[i].fName >> empAr[i].lName >> empAr[i].gender >> empAr[i].rate >> empAr[i].empId >> empAr[i].age;
		while (inputFile) {
			i++;
			inputFile >> empAr[i].fName >> empAr[i].lName >> empAr[i].gender >> empAr[i].rate >> empAr[i].empId >> empAr[i].age;
		}
		inputFile.close();
		return i;
	}
}

void findMale(const Employee empAr[], const int size) {
	
	ofstream outputFile;
	outputFile.open("maleOut.dat");
	
	for (int i = 0; i < size; i++){
		if (empAr[i].gender == 'M') {
			outputFile << empAr[i].empId << setw(15) << empAr[i].fName << setw(15) << empAr[i].lName << endl;
		}
	}
	outputFile.close();
}

void findEmployee(const Employee empAr[], const int size) {
	bool found = false;
	
	int empNum;
	
	cout << "Enter employee number: ";
	cin >> empNum;
	
	for (int i = 0; !found && i < size; i++) {
		if (empNum == empAr[i].empId) {
			cout << empAr[i].fName << " " << empAr[i].lName;
			found = true;
		}
	}
	if (!found) {
		cout << "There is no employee with the ID: " << empNum << endl;
	}
}

Employee findOldest(const Employee empAr[], const int size) {
	
	int oldest = 0;
	int age = 0;

	for (int i = 1; i < size; i++) {
		if (empAr[i].age > age){
			age = empAr[i].age;
			oldest = i;
		}
	}
	return empAr[oldest];
}

void printEmployee(const Employee emp) {
	cout << emp.fName << setw(15) << emp.lName << setw(15) << emp.gender << setw(15) << emp.rate << setw(15) << emp.empId << setw(15) << emp.age;
}