#include <iostream>
using namespace std;
const int QUARTER = 25;
const int DIME = 10;
const int NICKEL = 5;
const int PENNY = 1;

int main ()
{
  /* 1. variables created and constant values are established for quarters, dimes, nickles, pennies and totalAmount.
  2.string literal printed to console for user input.
  3. value for quarters is defined as total amount divided by itself.
  4. dimes are total amount modulus quarter divided by dime.
  5. nickels = total amount modulus dime divided by nickel.
  6. pennies = total amount modulus nickel divided by penny.
  7. output of total breakdown is printed to console.

  */
  int quarters, dimes, nickels, pennies;
  int totalAmount;
  cout << "Enter the total amount.";
  cin >> totalAmount;
  quarters = totalAmount/QUARTER;
  dimes = (totalAmount % QUARTER)/DIME;
  nickels = (totalAmount % DIME)/NICKEL;
  pennies = (totalAmount % NICKEL)/PENNY;

  cout << quarters << " Quarters\n";
  cout << dimes << " Dimes\n";
  cout << nickels << " Nickels\n";
  cout << pennies << " Pennies\n";


}
/* Output:
Enter the total amount.357
14
0
1
2
User inputs the amount they want broken down. It's then divied up into the corresponding values of Quarters, Dimes, Nickels, and Pennies */
