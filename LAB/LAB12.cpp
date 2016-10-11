#include <iostream>
#include <string>
using namespace std;

void getInfo(string&, char&, int&);
bool verifyEligibility(char, int);
void printLetter(bool, string);

int main() {
	
	string name;
	char gender;
	int age;
	bool verify;
	
	getInfo(name, gender, age);
	verify = verifyEligibility(gender, age);
	printLetter(verify, name);
	return 0;
	
}

void getInfo(string &n, char &g, int &a) {
	
	cout << "Input name: ";
	cin >> n;
	
	cout << "Input gender: ";
	cin >> g;
	
	while (g != 'm' && g != 'M' && g != 'f' && g != 'F' ) {
		cout << "Invalid Gender." << endl;
		cout << "Input gender: ";
		cin >> g;
	}	
	
	cout << "Input age: ";
	cin >> a;
	
}

bool verifyEligibility(char g, int a) {
	
	if (g != 'm' && g != 'M') {
		return false;
	}
	else if (a < 18) {
		return false;
	}
	else
		return true;
}

void printLetter(bool v, string name) {
	
	if (v == true)
		cout << "Dear " << name << "\nPlease join the militey" << endl;
	else
		cout << "Thank you for applying." << endl;
}