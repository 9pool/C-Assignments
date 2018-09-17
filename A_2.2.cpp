#include <iostream>
#include <string>
using namespace std;


int main() {

  float celsiusInput;
  float farenheit;
  string prompt;
  prompt = "Enter degrees Celsius to be converted to Farenheit:\n";
  cout << prompt;
  cin  >> celsiusInput;
  farenheit = ((9.0/5.0)*celsiusInput)+32.0;
  cout << celsiusInput << " degrees celsius is " << farenheit << " degrees farenheit\n";

  return 0;
}
//1.String literal printed to console.
//2.User is prompted for input that will be assigned to celsiusInput
//3.The solution to the equation on line 14 is assigned to farenheit as its value.
//4.Line 15 prints user's input and output in conjuction with literal string.
//5.
/*
 Output ex:
 Enter degrees Celsius to be converted to Farenheit:
 40
 40 degrees celsius is 104 degrees farenheit
 */
