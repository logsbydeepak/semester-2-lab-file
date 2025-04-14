#include <iostream>
using namespace std;

class A {
public:
  void displayA() { cout << "Class A" << endl; }
};

class B : public A {
public:
  void displayB() { cout << "Class B" << endl; }
};

int main() {
  B obj;
  obj.displayA();
  obj.displayB();
  return 0;
}

/*
Class A
Class B
*/
