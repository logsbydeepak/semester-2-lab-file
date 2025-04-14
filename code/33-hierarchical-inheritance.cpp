#include <iostream>
using namespace std;

class A {
public:
  void showA() { cout << "Class A" << endl; }
};

class B : public A {
public:
  void showB() { cout << "Class B" << endl; }
};

class C : public A {
public:
  void showC() { cout << "Class C" << endl; }
};

int main() {
  B obj1;
  C obj2;

  obj1.showA();
  obj1.showB();
  obj2.showA();
  obj2.showC();
  return 0;
}

/*
Class A
Class B
Class A
Class C
*/
