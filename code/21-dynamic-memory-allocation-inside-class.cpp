#include <iostream>
using namespace std;

class Number {
private:
  int *num; // pointer to dynamically allocated int

public:
  // Constructor
  Number(int value) {
    num = new int; // allocate memory
    *num = value;  // set value
  }

  // Function to display the number
  void show() { cout << "Value: " << *num << endl; }

  // Destructor
  ~Number() {
    delete num; // free memory
    cout << "Memory deallocated" << endl;
  }
};

int main() {
  Number n(42); // create object with dynamic int
  n.show();

  Number *ptr = new Number(100); // Create object using pointer
  ptr->show();                   // Access member function using pointer

  delete ptr; // Free memory

  return 0;
}

/*
Value: 42
Value: 100
Memory deallocated
Memory deallocated
*/
