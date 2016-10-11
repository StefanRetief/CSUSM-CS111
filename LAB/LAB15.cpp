#include <iostream>
#include <iomanip>
using namespace std;

const int STU_SIZE = 5;
const int TEST_SIZE = 3;

void fillArray(int scores[][TEST_SIZE]);
void stuAverage(int const scores[][TEST_SIZE], double sAverage[STU_SIZE]);
void testAverage(int const scores[][TEST_SIZE], double tAverage[TEST_SIZE]);
void printArray(int scores[][TEST_SIZE], double sAverage[STU_SIZE], double tAverage[TEST_SIZE]);

int main() {
	
	int scores[STU_SIZE][TEST_SIZE];
	double sAverage[STU_SIZE];
	double tAverage[TEST_SIZE];
	
	fillArray(scores);
	stuAverage(scores, sAverage);
	testAverage(scores, tAverage);
	printArray(scores, sAverage, tAverage);
	
}

void fillArray(int scores[][TEST_SIZE]) {
	
	for (int test = 0; test < TEST_SIZE; test++) {
		cout << "Enter test scores for test #" << test + 1 << endl;		for (int stu = 0; stu < STU_SIZE; stu++) {
			cout << "Student #" << stu + 1 << ": ";
			cin >> scores[stu][test];
		}
	}
}

void stuAverage(const int scores[][TEST_SIZE], double average[STU_SIZE]) {
	
	int total[5] = {0,0,0,0,0};
	
	for (int stu = 0; stu < STU_SIZE; stu++) {
		for (int test = 0; test < TEST_SIZE; test++) {
			total[stu] += scores[stu][test];
		}
		average[stu] = total[stu] / TEST_SIZE;
	}
}

void testAverage(const int scores[][TEST_SIZE], double average[TEST_SIZE]) {
	
	int total[3] = {0,0,0};
	
	for (int test = 0; test < TEST_SIZE; test++) {
		for (int stu = 0; stu < STU_SIZE; stu++) {
			total[test] += scores[stu][test];
		}
		average[test] = total[test] / STU_SIZE;
	}
	
}

void printArray(int scores[][TEST_SIZE], double sAverage[STU_SIZE], double tAverage[TEST_SIZE]) {
	
	cout << setw(10) << left << "\nTEST";
	for (int i = 0; i < STU_SIZE; i++) {
		cout << "Stu " << i + 1;
		cout << setw(9) << right;
	}
	cout << setw(10) << right << "Average" << endl;
	for (int test = 0; test < TEST_SIZE; test++) {
		cout << setw(10) << left << test + 1;
		for (int stu = 0; stu < STU_SIZE; stu++) {
			cout << setw(10) << left << scores[stu][test];
		}
		cout << setw(10) << left << tAverage[test] << endl;
	}
	cout << setw(10) << left << "Average";
	for (int stu = 0; stu < STU_SIZE; stu++) {
		cout << setw(10) << left << sAverage[stu];
	}
		
}