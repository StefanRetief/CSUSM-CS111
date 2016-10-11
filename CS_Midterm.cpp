#include <iostream>
using namespace std;

void oneToTen();
void tenToOne();
void backwardsOneToTen();
void backwardsTenToOne();

int main()
{
	cout << "One to Ten" << endl;
	oneToTen();
	cout << "\n\nTen To One" << endl;
	tenToOne();
	cout << "\n\nBackwards One To Ten" << endl;
	backwardsOneToTen();
	cout << "\n\nBackwards Ten To One" << endl;
	backwardsTenToOne();
}

void oneToTen() {
	
	int stars = 1;
	for (int line = 0; line < 10; line++) {
		for (int counter = 0; counter < stars; counter++)
			cout << "*";
		stars++;
		cout << endl; 
	}
}

void tenToOne() {
	
	int stars = 10;
	for (int line = 0; line < 10; line++) {
		for (int counter = 0; counter < stars; counter++)
			cout << "*";
		stars--;
		cout << endl;
	}
}

void backwardsOneToTen() {
	
	int spaces = 9;
	int stars = 1;
	for (int line = 0; line < 10; line++) {
		for (int counter = 0; counter < spaces; counter++)
			cout << " ";
		spaces--;
		for (int counter2 = 0; counter2 < stars; counter2++)
			cout << "*";
		stars++;
		cout << endl;
	}
	
}

void backwardsTenToOne() {
	
	int spaces = 0;
	int stars = 10;
	for (int line = 0; line < 10; line++) {
		for (int counter2 = 0; counter2 < spaces; counter2++)
			{ cout << " ";}
		spaces++;
		for (int counter = 0; counter < stars; counter++)
			cout << "*";
		stars--;
		
		cout << endl;
	}
}
