#include <iostream>
using namespace std;

void fillArray(int []);
void printArray(const int []);
bool findKey(const int [], int);
void sortArray(int []);

const int SIZE = 5;

int main() {
	
	int array[SIZE];
	int key;
	bool found;
	fillArray(array);
	printArray(array);
	
	cout << "Enter a key: ";
	cin >> key;
	found = findKey(array, key);
	if (found) {
		cout << key << " was in the array." << endl;
	}
	else {
		cout << key << " was not in the array." << endl;
	}
	
	sortArray(array);
	printArray(array);
}

void fillArray(int ar[]) {
	for (int i = 0; i < SIZE; i++) {
		cout << "Enter a number: ";
		cin >> ar[i];
	}
}

void printArray(const int ar[]) {
	for (int i = 0; i < SIZE; i++) {
		cout << ar[i] << " ";
	}
	cout << endl;
}

bool findKey(const int ar[], int k) {

	for (int i = 0; i < SIZE; i++) {
		if (ar[i] == k)
			return true;
	}
	return false;
}

void sortArray(int ar[]) {
	int scan;
	int minI;
	int minV;
	
	for (scan = 0; scan < (SIZE-1); scan++) {
		minI = scan;
		minV = ar[scan];
		for (int i = scan + 1; i < SIZE; i++) {
			if (ar[i] < minV) {
				minV = ar[i];
				minI = i;
			}
		}
		ar[minI] = ar[scan];
		ar[scan] = minV;
	}
}