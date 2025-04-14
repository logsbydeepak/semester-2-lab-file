#include <iostream>
using namespace std;

class Number {
  int value;

public:
  Number(int v) {
    value = v;
  }
  Number operator+(const Number &obj) {
    return Number(value + obj.value);
  }
  void display() {
    cout << "Value: " << value << endl;
  }
};

int main() {
  Number n1(10);
  Number n2(20);
  Number n3 = n1 + n2;
  n1.display();
  n2.display();
  n3.display();
  return 0;
}

/*
Value: 10
Value: 20
Value: 30
*/
