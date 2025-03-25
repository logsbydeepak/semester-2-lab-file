#include <iostream>
using std::cout; // declaration
using std::endl;

namespace A {
void display() { cout << "Hi from A namespace" << endl; }
}

namespace B {
void display() { cout << "Hi from B namespace" << endl; }
}

namespace C {
void greet() { cout << "Hi from C namespace using directive" << endl; }
} 
using namespace C; // directive

namespace D {
void message() { cout << "Hi from D namespace using declaration" << endl; }
}
using D::message; // declaration

void display() { cout << "Hi from global namespace" << endl; }

int main() {
  A::display();
  B::display();
  greet();
  message();
  display();

  return 0;
}

/*
Hi from A namespace
Hi from B namespace
Hi from C namespace using directive
Hi from D namespace using declaration
Hi from global namespace
*/
