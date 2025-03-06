//When you know exactly how many times you want to loop through a block of code, use the for loop instead of a while loop:
#include <iostream>
using namespace std;

int main() {
    // Loop from 1 to 5
    for (int i = 1; i <= 5; i++) {
        cout << "Iteration: " << i << endl;
    }
    return 0;
}
//Nested Loops
//A nested loop is a loop inside a loop.
//The "inner loop" will be executed one time for each iteration of the "outer loop":
int main(){
   // Outer loop
for (int i = 1; i <= 2; ++i) {
    cout << "Outer: " << i << "\n"; // Executes 2 times
  
    // Inner loop
    for (int j = 1; j <= 3; ++j) {
      cout << " Inner: " << j << "\n"; // Executes 6 times (2 * 3)
    }
  }

}
//output
//Outer: 1
// Inner: 1
// Inner: 2
// Inner: 3
//Outer: 2
// Inner: 1
// Inner: 2
// Inner: 3
//The foreach Loop
//There is also a "for-each" loop, which is used exclusively to loop through elements in an array:
int main(){
    string cars[4] = {"Volvo", "BMW", "Ford", "Mazda"};
    for (string i : cars) {
      cout << i << "\n";
    }
}
//output
//volvo
//BMW
//Ford
//Mazda
int main() {
    // Create an array of integers
    int myNumbers[5] = {10, 20, 30, 40, 50};
    
    // Loop through integers
    for (int i : myNumbers) {
      cout << i << "\n";
    }
    return 0;
  }