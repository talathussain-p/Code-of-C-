//C++ Conditions and If Statements
//You already know that C++ supports the usual logical conditions from mathematics:

//Less than: a < b
//Less than or equal to: a <= b
//Greater than: a > b
//Greater than or equal to: a >= b
//Equal to a == b
//Not Equal to: a != b
//You can use these conditions to perform different actions for different decisions.
//C++ has the following conditional statements:
// if,else, else if, switch
//The if Statement
//Use the if statement to specify a block of C++ code to be executed if a condition is true.
//Syntax
#include <iostream>
using namespace std;

int main() {
  if (20 > 18) {
    cout << "20 is greater than 18";
  }  
  return 0;
}
//The else Statement
//Use the else statement to specify a block of code to be executed if the condition is false.
int main() {
    int time = 20;
    if (time < 18) {
      cout << "Good day.";
    } else {
      cout << "Good evening.";
    }
    return 0;
  }
// Outputs "Good evening."

//switch statement
//Use the switch statement to select one of many code blocks to be executed.

int main() {
    int day = 4;
    switch (day) {
    case 1:
      cout << "Monday";
      break;
    case 2:
      cout << "Tuesday";
      break;
    case 3:
      cout << "Wednesday";
      break;
    case 4:
      cout << "Thursday";
      break;
    case 5:
      cout << "Friday";
      break;
    case 6:
      cout << "Saturday";
      break;
    case 7:
      cout << "Sunday";
      break;
    }
    return 0;
  }
    //Outputs "Thursday" (day 4)  