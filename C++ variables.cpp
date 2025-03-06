#include <iostream>
using namespace std;
//Where type is one of C++ types (such as int), and variableName is the name of the variable (such as x or myName). The equal sign is used to assign values to the variable
int main() {
  int myNum = 15;   // Now myNum is 15
  myNum = 10;       // Now myNum is 10
  cout << myNum;
  return 0;
}
//you can  declare more than one variable of the same type, use a comma-separated list:
int main() {
  int x = 5, y = 6, z = 50;  
  cout << x + y + z;
  return 0;
}
//All C++ variables must be identified with unique names.These unique names are called identifiers.
int main() {
  // Good variable name
  int minutesPerHour = 60;
  
  // OK, but not so easy to understand what m actually is
  int m = 60;
  
  cout << minutesPerHour << "\n";
  cout << m;
  return 0;
}
//The const keyword (this will declare the variable as "constant", which means unchangeable and read-only):
int main() {
  const int myNum = 15; // myNum will always be 15
  myNum = 10; // error: assignment of read-only variable 'myNum'
  cout << myNum;
  return 0;
}
//Right constant variable this:
int main() {
  const int minutesPerHour = 60;
  const float PI = 3.14;
  cout << minutesPerHour << "\n";
  cout << PI;
  return 0;
}
