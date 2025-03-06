//C++ has many functions that allows you to perform mathematical tasks on numbers.
//Max and min functions
#include <iostream>
using namespace std;

int main() {
  cout << max(5, 10);//output 10
  return 0;
}
int main() {
    cout << min(5, 10);//output 5
    return 0;
  }
  //C++ <cmath> Library
  //Other functions, such as sqrt (square root), round (rounds a number) and log (natural logarithm), can be found in the <cmath> header file:
  #include <iostream>
#include <cmath>
using namespace std;

int main() {
  cout << "Square root of 64 is: " << sqrt(64) << "\n";
  cout << "Round 2.6 to the nearest integer: " << round(2.6) << "\n";
  cout << "The natural logarithm of 2 is: " <<log(2) << "\n";
  return 0;
}
