//The while loop loops through a block of code as long as a specified condition is true:
//The do/while loop is a variant of the while loop. This loop will execute the code block once, before checking if the condition is true, then it will repeat the loop as long as the condition is true.
//While Loop
int main() {
    int i = 0;
    while (i < 5) {
      cout << i << "\n";
      i++;
    }
    return 0;
  }
  //output 0 1 2 3 4
  //do while loop
    int main() {
        int i = 0;
        do {
        cout << i << "\n";
        i++;
        }
        while (i < 5);
        return 0;
    }
    //output 0 1 2 3 4