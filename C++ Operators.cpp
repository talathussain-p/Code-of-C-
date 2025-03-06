//Arithmetic Operators
//	Addition Adds together two values
#include <iostream>
using namespace std;

int main() {
  int x = 5;
  int y = 3;
  cout << x + y;
  return 0;
}
//	Subtraction	Subtracts one value from another	x - y
//	Multiplication	Multiplies two values	x * y
//Division	Divides one value by another	x / y
//Modulus	Returns the division remainder	x % y
//Increment	Increases the value of a variable by 1	++x
int main() {
    int x = 5;
    ++x;
    cout << x;
    return 0;
  }
  //Decrement	Decreases the value of a variable by 1	--x

  //Assignment Operators
  //n the example below, we use the assignment operator (=) to assign the value 10 to a variable called x:
    int main(){
        int x = 10;
        cout << x;
        return 0;
    }
    //The addition assignment operator (+=) adds a value to a variable:
    int main() {
        int x = 10;
        x += 5;
        cout << x;
        return 0;
      }
      int main() {
        int x = 10;
        x -= 5;
        cout << x;
        return 0;
      }
      int main() {
        int x = 10;
        x *= 5;
        cout << x;
        return 0;
      }
      int main() {
        int x = 10;
        x /= 5;
        cout << x;
        return 0;
      }
      int main() {
        int x = 10;
        x %= 5;
        cout << x;
        return 0;
      }
      int main() {
        int x = 10;
        x &= 5;
        cout << x;
        return 0;
      }
      int main() {
        int x = 10;
        x |= 5;
        cout << x;
        return 0;
      }
      int main() {
        int x = 10;
        x ^= 5;
        cout << x;
        return 0;
      }
      int main() {
        int x = 10;
        x += 5;
        cout << x;
        return 0;
      }
      int main() {
        int x = 10;
        x >>= 5;
        cout << x;
        return 0;
      }
      int main() {
        int x = 10;
        x <<= 5;
        cout << x;
        return 0;
      }
      
      //Comparison Operators
 //Comparison operators are used to compare two values (or variables). This is important in programming, because it helps us to find answers and make decisions.
//The return value of a comparison is either 1 or 0, which means true (1) or false (0).
int main() {
    int x = 5;
    int y = 3;
    cout << (x > y); // returns 1 (true) because 5 is greater than 3
    return 0;
  }
    int main() {
        int x = 5;
        int y = 3;
        cout << (x == y); // returns 0 (false) because 5 is not equal to 3
        return 0;
    }
    int main() {
        int x = 5;
        int y = 3;
        cout << (x != y); // returns 1 (true) because 5 is not equal to 3
        return 0;
    }
    int main() {
        int x = 5;
        int y = 3;
        cout << (x >= y); // returns 1 (true) because 5 is greater, or equal, to 3
        return 0;
    }
    int main() {
        int x = 5;
        int y = 3;
        cout << (x <= y); // returns 0 (false) because 5 is neither less than or equal to 3
        return 0;
    }
    int main() {
        int x = 5;
        int y = 3;
        cout << (x < y); // returns 0 (false) because 5 is greater than 3
        return 0;
    }
    //Logical Operators
    //Logical operators are used to determine the logic between variables or values.
    //The return value of a logical operator is either 1 or 0.
    int main() {
        int x = 5;
        cout << (x > 3 && x < 10); // returns 1 (true) because 5 is greater than 3 AND 5 is less than 10
        return 0;
      }
      int main() {
        int x = 5;
        cout << (x > 3 || x < 4); // returns 1 (true) because one of the conditions are true (5 is greater than 3, but 5 is not less than 4)
        return 0;
      }
      int main() {
        int x = 5;
        cout << !(x > 3 && x < 10); // returns 0 (false) because ! (not) is used to reverse the result
        return 0;
      }
      //Bitwise Operators
      //Bitwise operators are used to perform bitwise calculations on integers. The integers are first converted into binary and then operations are performed bit by bit:
      int main() {
        int x = 5; // 5 = 0101 in binary
        int y = 3; // 3 = 0011 in binary
        cout << (x & y); // The result is 1 (0001 in binary)
        return 0;
      }
      int main() {
        int x = 5; // 5 = 0101 in binary
        int y = 3; // 3 = 0011 in binary
        cout << (x | y); // The result is 7 (0111 in binary)
        return 0;
      }
      int main() {
        int x = 5; // 5 = 0101 in binary
        int y = 3; // 3 = 0011 in binary
        cout << (x ^ y); // The result is 6 (0110 in binary)
        return 0;
      }
      int main() {
        int x = 5; // 5 = 0101 in binary
        cout << (~x); // The result is -6 (1010 in binary)
        return 0;
      }
      int main() {
        int x = 5; // 5 = 0101 in binary
        cout << (x << 1); // The result is 10 (1010 in binary)
        return 0;
      }
        int main() {
            int x = 5; // 5 = 0101 in binary
            cout << (x >> 1); // The result is 2 (0010 in binary)
            return 0;
        }
            
      
      
      
      
            
  