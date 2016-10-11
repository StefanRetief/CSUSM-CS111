/***********************************************/
/* PURPOSE:	finds the distance between points	*/
/*												*/
/* IMPLEMENTED BY: Stefan Retief				*/
/*												*/
/* USER INFORMATION: Input numbers for 		*/
/* points										*/
/*												*/
/* IMPLEMENTATION METHOD: Get the x and Y 		*/
/* values, and puts it in the fomula			*/
/***********************************************/

#include <iostream>
#include <cmath>
using namespace std;

int main() {
	int y1;
	int y2;
	int x1;
	int x2;
	double distance;
	
	//Get the points from user
	cout << "Input the the first point's coordinates separated by a space. X Y" << endl;
	cin >> x1 >> y1;
	
	cout << "Input the the second point's coordinates separated by a space. X Y" << endl;
	cin >> x2 >> y2;
	
	//Find the distance using the formula
	distance = sqrt(pow((x2-x1),2) + pow((y2-y1),2));
	
	//output the distance with the points
	cout << "The distance between the points (" << x1 << "," << y1 << ") and (" << x2 << "," << y2 << ") is: " << distance << endl;
	
	
}