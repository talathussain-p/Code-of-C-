#include <iostream>
#include <string>
using namespace std;
 
int main () {
  // Creating variables
  int myNum = 5;               // Integer (whole number)
  float myFloatNum = 5.99;     // Floating point number
  double myDoubleNum = 9.98;   // Floating point number
  char myLetter = 'D';         // Character
  bool myBoolean = true;       // Boolean
  string myString = "Hello";   // String
   
  // Print variable values
  cout << "int: " << myNum << "\n";
  cout << "float: " << myFloatNum << "\n";
  cout << "double: " << myDoubleNum << "\n";
  cout << "char: " << myLetter << "\n";
  cout << "bool: " << myBoolean << "\n";
  cout << "string: " << myString << "\n";
 
  return 0;
}
//Boolean Data Type
//A boolean data type is declared with the bool keyword and can only take the values true or false.When the value is returned, true = 1 and false = 0.
int main() {
    bool isCodingFun = true;
    bool isFishTasty = false;
    cout << isCodingFun << "\n";
    cout << isFishTasty;
    return 0;
  }
  //Character Types
//The char data type is used to store a single character. The character must be surrounded by single quotes, like 'A' or 'c':
int main () {
    char a = 65, b = 66, c = 67;
    cout << a;
    cout << b;
    cout << c;
    return 0;
  }
//string Data Type
//The string type is used to store a sequence of characters (text). This is not a built-in type, but it behaves like one in its most basic usage. String values must be surrounded by double quotes:  
int main() {
    string greeting = "Hello";
    cout << greeting;
    return 0;
  }
  