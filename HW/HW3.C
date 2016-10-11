/********************************************************************************************/
/* PURPOSE: Displays the price of 5 items, calculates the sales tax (7%), calculates the    */
/* subtotal, and add the sales tax and subtotal for a grand total                           */
/*                                                                                          */
/* IMPLEMENTED BY: Stefan Retief                                                            */
/*                                                                                          */
/* DATE: September 14, 2015                                                                 */
/*                                                                                          */
/* USER INFORMATION: Compile and run. User inputs values for items in Part 2.               */
/*                                                                                          */
/* IMPLEMENTATION METHOD: The subtotal is calculated by adding the 5 items together. The    */
/* total sales tax is multiplied by the constant tax. The total tax is added to the subtotal*/
/* to equal the total. Part 2, the user inputs the item values.                             */
/*                                                                                          */
/* OVERVIEW OF SUBPARTS: Part 1: Uses assigned numbers. Part 2: User assigns numbers        */
/********************************************************************************************/

#include <iostream>
#include <string>
using namespace std;

int main()
{

  //Part 1: Displays assigned values and calculates.
  //Assign the variables

  const float SALES_TAX = 0.07;
  float itemOne = 15.95;
  float itemTwo = 24.95;
  float itemThree = 6.95;
  float itemFour = 12.95;
  float itemFive = 3.95;
  float subtotal;
  float totalTax;
  float total;

  //Display the item prices.
    
  cout << "The price of item 1 is: $" << itemOne << endl;
  cout << "The price of item 2 is: $" << itemTwo << endl;
  cout << "The price of item 3 is: $" << itemThree << endl;
  cout << "The price of item 4 is: $" << itemFour << endl;
  cout << "The price of item 5 is: $" << itemFive << endl;

  //Calculate the subtotal and display
    
  subtotal = itemOne + itemTwo + itemThree + itemFour + itemFive;

  cout << "The subtotal is: $" << subtotal << endl;

  //Calculate the total tax and display
    
  totalTax = subtotal * SALES_TAX;

  cout << "The amount of sales tax is: $" << totalTax << endl;

  //Calculates the total by adding subtotal and total tax and display
    
  total = subtotal + totalTax;

  cout << "The total is: $" << total << endl;

  //Part 2: Asks users for items prices and calculates.
  //Displays prompt and asks user for input for item prices

  cout << "\nWhat is the price of item 1? " << endl;
  cin >> itemOne;

  cout << "\nWhat is the price of item 2? " << endl;
  cin >> itemTwo;

  cout << "\nWhat is the price of item 3? " << endl;
  cin >> itemThree;

  cout << "\nWhat is the price of item 4? " << endl;
  cin >> itemFour;

  cout << "\nWhat is the price of item 5?" << endl;
  cin >> itemFive;

  //Display the item prices after input

  cout << "\nThe price of item 1 is: $" << itemOne << endl;
  cout << "The price of item 2 is: $" << itemTwo << endl;
  cout << "The price of item 3 is: $" << itemThree << endl;
  cout << "The price of item 4 is: $" << itemFour << endl;
  cout << "The price of item 5 is: $" << itemFive << endl;
    
  //calculate the subtotal and display

  subtotal = itemOne + itemTwo + itemThree + itemFour + itemFive;

  cout << "The subtotal is: $" << subtotal << endl;

  //Calculates the total tax and display
    
  totalTax = subtotal * SALES_TAX;

  cout << "The amount of sales tax is: $" << totalTax << endl;

  //Calculate the total by adding subtotal and total tax and display

  total = subtotal + totalTax;

  cout << "The total is: $" << total << endl;
  
  return 0;
}
