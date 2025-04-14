#include <iostream>
using namespace std;

class Number {
  int value;

public:
  Number(int v) {
    value = v;
  }
  Number operator-() {
    return Number(-value);
  }
  void display() {
    cout << "Value: " << value << endl;
  }
};

int main() {
  Number n1(10);
  Number n2 = -n1;

  n1.display();
  n2.display();

  return 0;
}

/*
Value: 10
Value: -10
*/
