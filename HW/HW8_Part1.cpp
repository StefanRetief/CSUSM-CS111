/********************************************************************************************/
/* PURPOSE: To get judges scores, drop the lowest and highest scores, and take the average  */
/* of the three remaining scores.				                                             */
/*                                                                                          */
/* IMPLEMENTED BY: Stefan Retief                                                            */
/*                                                                                          */
/* DATE: October 21, 2015						                                             */
/*                                                                                          */
/* USER INFORMATION: Compile and run. User inputs a score for each of 5 judges.             */
/*                                                                                          */
/* IMPLEMENTATION METHOD: The program asks the user for five scores using a function. The   */
/* function uses value by reference and return the scores. The scores are then taken, where */
/* the the highest and lowest are found inside the calcScore function. All the scores are   */
/* added up and the highest and lowest are subtracted from the total. Total is divided by 3 */
/* and displayed.								                                             */
/*                                                                                          */
/* OVERVIEW OF SUBPARTS: 						                                             */
/********************************************************************************************/
#include <iostream>
#include <iomanip>
using namespace std;

//prototype functions.
void getJudgeData(double &, double &, double &, double &, double &);
void calcScore(double, double, double, double, double);
int findLowest(double, double, double, double, double);
int findHighest(double, double, double, double, double);

//the main function contains the 5 scores for storage.
int main() {
	
	double s1, s2, s3, s4, s5;
	
	//send the NULL scores to the getJudgeData function for the user to input scores.
	getJudgeData(s1, s2, s3, s4, s5);
	
	//send the NEW scores to the calcScore function to add to a total and find highest and lowest.
	calcScore(s1, s2, s3, s4, s5);
	
	
}

//This function gets the scores from the user and saves them to the s1, s2, etc.. by reference.
void getJudgeData(double &score1, double &score2, double &score3, double &score4, double &score5) {
	
	//ask the user for 5 scores and make sure that there are no values less that 0 or greater than 10.
	cout << "What is the score for judge 1?: ";
	cin >> score1;
	
	while (score1 > 10 || score1 < 0) {
		cout << "Invalid Score." << endl;
		cout << "What is the score for judge 1?: ";
		cin >> score1;
	}
	
	cout << "What is the score for judge 2?: ";
	cin >> score2;
	
	while (score2 > 10 || score2 < 0) {
			cout << "Invalid Score." << endl;
			cout << "What is the score for judge 2?: ";
			cin >> score2;
		}
	
	cout << "What is the score for judge 3? :";
	cin >> score3;
	
	while (score3 > 10 || score3 < 0) {
			cout << "Invalid Score." << endl;
			cout << "What is the score for judge 3?: ";
			cin >> score3;
		}
		
	cout << "What is the score for judge 4?: ";
	cin >> score4;
	
	while (score4 > 10 || score4 < 0) {
			cout << "Invalid Score."<< endl;
			cout << "What is the score for judge 4?: ";
			cin >> score4;
		}
		
	cout << "What is the score for judge 5?: ";
	cin >> score5;
	
	while (score5 > 10 || score5 < 0) {
			cout << "Invalid Score." << endl;
			cout << "What is the score for judge 5?: ";
			cin >> score5;
		}
		

}

//This function calculates the scores by adding them into a total and finding the highest and lowest to subtract
//from the total before dividing by 3.
void calcScore(double score1, double score2, double score3, double score4, double score5) {
	
	//set a variable for this function
	double score_final;
	
	//sets the variables, where the values for them are returned by the functions.
	double highest = findHighest(score1, score2, score3, score4, score5);
	double lowest = findLowest(score1, score2, score3, score4, score5);
	
	//score final is calculated and displayed
	score_final = score1 + score2 + score3 + score4 + score5 - (highest + lowest);
	score_final /= 3;
	cout << "The final score is " << setprecision(1) << fixed << score_final;
}

//This function finds the highest value and returns it to the variable 'highest' in the calcScore function.
int findHighest(double score1, double score2, double score3, double score4, double score5) {
	
	//set a variable for this function
	double highest = 0;
	
	//compare the scores w/o altering any data of the actual scores
	if (score1 > score2)
		highest = score1;
	else
		highest = score2;
	if (highest < score3)
		highest = score3;
	if (highest < score4)
		highest = score4;
	if (highest < score5)
		highest = score5;

	//returns the highest value
	return highest;
}

//This function finds the lowest value and returns it to the variable 'lowest' in the calcScore function.
int findLowest(double score1, double score2, double score3, double score4, double score5) {
	
	//set a variable for this function. In order to make sure I get the lowest, I set this veriable
	//to 10 because there shouldn't be any score larger than 10.
	double lowest = 10;
	
	//compare the scores w/o altering any data of the actual scores
	if (score1 < score2)
		lowest = score1;
	else
		lowest = score2;
	if (lowest > score3)
		lowest = score3;
	if (lowest > score4)
		lowest = score4;
	if (lowest > score5)
		lowest = score5;

	//return the lowest value
	return lowest;
}