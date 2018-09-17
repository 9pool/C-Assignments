#include <iostream>
#include <iomanip>
using namespace std;


int main ()
{
  char shape;

  cout << "Enter the type of figure (s or t):\n";
  cin >> shape;

  if (shape == 't')
  {
    float base, height;
    cout << "Enter the base:\n";
    cin >> base;
    cout << "Enter the height:\n";
    cin >> height;
    float area = ((1.0/2.0) * base * height);
    cout << fixed << setprecision(1) <<"Area is " << area << endl;

  }
  else if (shape == 's')
  {
    float length;
    cout << "Enter the length of a side:\n";
    cin >> length;
    float area = length * length;
    cout << fixed << setprecision(1) <<"Area is " << area << endl;
  }
  else {
    cout << "WRONGERU\n";
  }

  return 0;
}

/*
1. Variable shape is defined as a character
2. String literal is printed to console.
3. Prompts user for input to assign to shape
4. Else If statement created. If the shape is equal to 's' then ouput following conditions.
5. A Float value variable is defined.
6. String literal is printed to console with a new line command.
7. Prompts user for input to be assigned to length vaiable.
8. Area is defined as the product of length multiplied by length as a float variable.
9. Output is printed rounded to 1 digit after the decimal with the string literal "Area is".
10. Else statement. IF none of these conditions are met for input, string literal "WRONGERU" will be printed to console.

Output for 't':
Enter the type of figure (s or t):
t
Enter the base:
9
Enter the height:
4
Area is 18.0

Output for 's':
Enter the type of figure (s or t):
s
Enter the length of a side:
25
Area is 625.0
*/
