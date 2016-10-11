#include <iostream>
using namespace std;

int main() {
	
	const int SIZE = 5;
	int array[SIZE];
	
	for (int count = 0; count < SIZE; count++) {
		cout << "Enter a number: ";
		cin >> array[count];
	}
	
	int highest = array[0];
	for (int count = 1; count < SIZE; count++) {
		if (highest < array[count])
			highest = array[count];
	}
		
	for (int count = 0; count < SIZE; count++) {
		array[count] = array[count] * 2;
	}
	
	cout << "The highest number is " << highest << endl;
	
	cout << "The new numbers in the array are ";
	
	for (int count = 0; count < SIZE; count++) {
		cout << array[count] << " ";
	}
	
}