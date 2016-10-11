/********************************************************************************************/
/* PURPOSE: To allow the user to input player name, number and points, display a table of   */
/* all the players, and find the highest scoring player.                                    */
/*                                                                                          */
/* IMPLEMENTED BY: Stefan Retief                                                            */
/*                                                                                          */
/* DATE: Novemeber 23, 2015						                                             */
/*                                                                                          */
/* USER INFORMATION: Compile and run. Input the required info for each player.              */
/*                                                                                          */
/* IMPLEMENTATION METHOD: The program stores all the players' info into an array, by passing*/
/* by reference first, then displays a table by passing by value, and finally, finding the  */
/* highest scorer and total points by passing an arrray. All variables that have to do with */
/* the player's info is defined as their own struct called 'player'                         */
/*                                                                                          */
/* OVERVIEW OF SUBPARTS: 						                                             */
/********************************************************************************************/

#include <iostream>
#include <string>
#include <iomanip>
using namespace std;

//create a struct for the variables
struct Player {
	string name;
	int number;
	int points;
};

//declare prototypes
void getPlayerInfo(Player &);
void showInfo(Player);
int getTotalPoints(const Player [], int);
void showHighest(const Player [], int);

int main() {
	
	//declare the variables we will be using.
	const int SIZE = 12;
	Player team[SIZE];
	Player player;
	
	//run a loop that will get the info for each player by reference and store them in the array.
	for (int i = 0; i < SIZE; i++) {
		cout << "Player " << i+1 << endl;
		getPlayerInfo(player);
		team[i] = player;
		//make sure we don't end up not baing able to enter the info for all of our players by ignoring
		//extra '\n' in the strings.
		cin.ignore();
	}
	
	//starting the table to display the team
	cout << setw(10) << left << "Number" << setw(15) << left << "Name" << setw(10) << left << "Points" << endl;
	//for loop to display each players info by calling the function
	for (int i = 0; i < SIZE; i++) {
		player = team [i];
		showInfo(player);
	}
	//give us a barrier so it looks more organized.
	cout << "-----------------------------------" << endl;
	//find the total points and assign it
	int totalPoints = getTotalPoints(team, SIZE);
	//display
	cout << "The team's total points is: " << totalPoints << endl;
	
	//and finally, find the highest scoring player
	showHighest(team, SIZE);
	
}

//the function to get the player info
void getPlayerInfo(Player &p) {
		
		//asks user for each part of the struct and stores it into a variable that will be returned by reference
		cout << "Input player's name: ";
		getline(cin, p.name);
		cout << "Input player's number: ";
		cin >> p.number;
		while (p.number < 0) {
			cout << "Invalid number. Try again." << endl;
			cout << "Input player's number: ";
			cin >> p.number;
		}
		cout << "Input player's points: ";
		cin >> p.points;
		while (p.points < 0) {
			cout << "Invalid number. Try again." << endl;
			cout << "Input player's points: ";
			cin >> p.points;
		}
		cout << "-----------------------------------" << endl;
}

//display each player's info
void showInfo(Player p) {
	
	cout << setw(10) << left << p.number << setw(15) << left << p.name << setw(10) << p.points << endl;
	
}

//adds up all the info and return the total value to the main
int getTotalPoints(const Player p[], int size) {
	
	int total = 0;
	for (int i = 0; i < size; i++) {
		total += p[i].points;
	}
	return total;
}

//compares each score and find the highest. Once it find the highest, it assigns the name to a variable and number to a variable and displays.
void showHighest(const Player p[], int size) {
	
	int highest = p[0].points;
	string hiName = p[0].name;
	int hiNum = p[0].number;
	
	for (int i = 1; i < size; i++) {
		if (p[i].points > highest) {
			highest = p[i].points;
			hiName = p[i].name;
			hiNum = p[i].number;
		}
	}
	cout << "-----------------------------------" << endl;
	cout << "The highest scoring player is #" << hiNum << " " << hiName << endl;
}