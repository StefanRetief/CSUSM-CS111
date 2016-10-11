/********************************************************************************************/
/* PURPOSE: To display the date, course name, course number and the first lEtter of iPad.   */
/* IMPLEMENTED BY: Stefan Retief                                                            */
/* DATE: September 10, 2015                                                                 */
/* USER INFORMATION:                                                                        */
/* OVERVIEW OF SUBPARTS:                                                                    */
/********************************************************************************************/
#include <iostream>
#include <string>
using namespace std;

int main()
{
  int day = 9;
  int year = 2015;
  string courseName = "CS 111";
  int courseNumber = 40484;
  char letter = 'i';

  cout << "Today is September " << day << ", " << year << "." << endl;
  cout << "The name of this course is " << courseName << " and its number is " << courseNumber << "." << endl;
  cout << "The first letter of the word iPad is " << letter << "." << endl;
  return 0;
}
