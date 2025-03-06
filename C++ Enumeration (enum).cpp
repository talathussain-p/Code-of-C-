//An enum is a special type that represents a group of constants (unchangeable values).
//To create an enumeration, use the enum keyword (instead of struct or class), followed by the enum name (MyEnum), and a list of comma-separated identifiers (RED, GREEN, BLUE).
#include <iostream>
using namespace std;
 
enum Level {
  LOW = 1,
  MEDIUM,
  HIGH
};

int main() {
  enum Level myVar = MEDIUM;

  switch (myVar) {
    case 1:
      cout << "Low Level";
      break;
    case 2:
      cout << "Medium level";
      break;
    case 3:
      cout << "High level";
      break;
  }
  return 0;
}
