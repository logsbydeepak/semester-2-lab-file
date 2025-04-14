#include <iostream>
using namespace std;

class Number {
  int value;

public:
  Number(int v) {
    value = v;
  }

  // cannot modify any data members of the class
  void display() const {
    cout << "Value: " << value << endl;
  }
};

int main() {
  Number n(42);
  n.display();
  return 0;
}

/*
Value: 42
*/
