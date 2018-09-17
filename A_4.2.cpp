#include <iostream>
using namespace std;



int main(){
// 1. variables defined as constants and values established.
  int yearsOfSchool;
  const int MIDDLESCHOOL = 8;
  const int HIGHSCHOOL = 12;
  const int ELEMENTARYSCHOOL = 6;
  const int COLLEGE = 13;
// 2. String literal printed to console.
// 3. awaiting integer input for 'yearsOfSchool'
  cout << "Enter years of school\n";
  cin >> yearsOfSchool;
// 4. if years of school is equal to 0, string literal "No School" is printed.
  if (yearsOfSchool == 0)
  {
    cout << "No School.\n";
  }
  // years of school must be greater than 0-aka not a negative #. String literal printed if this rule applies.
  else if (yearsOfSchool < 0)
  {
    cout << "Years of school must be a positive integer\n";
  }
  else if (yearsOfSchool <= ELEMENTARYSCHOOL)
  {
    cout << "elementary school\n";
  }
  else if (yearsOfSchool <= MIDDLESCHOOL)
  {
    cout << "middle school\n";
  }
  else if (yearsOfSchool <= HIGHSCHOOL)
  {
    cout << "high school\n";
  }
  else
  {
    cout << "college\n";
  }
  //all else if conditions will be applied first, if none of them apply, then "else" will print string literal to console.

  /*Output:
Enter years of school
5
elementary school
~/projects/C++ Assignments ->

  */


  return 0;
}
