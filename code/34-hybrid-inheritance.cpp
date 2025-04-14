
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

class C {
public:
  void showC() { cout << "Class C" << endl; }
};

class D : public B, public C {
public:
  void showD() { cout << "Class D" << endl; }
};

int main() {
  D obj;
  obj.showA();
  obj.showB();
  obj.showC();
  obj.showD();
  // multilevel: A → B → D
  // multiple: C & B → D
  return 0;
}

/*
Class A
Class B
Class C
Class D
*/
