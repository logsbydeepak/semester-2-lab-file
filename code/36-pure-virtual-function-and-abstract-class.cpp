#include <iostream>
using namespace std;

class Shape { // abstract class
public:
  virtual void draw() = 0; // pure virtual function
};

class Circle : public Shape {
public:
  void draw() override { cout << "Drawing Circle" << endl; }
};

int main() {
  Circle c;
  c.draw();

  Shape *ptr = &c;
  ptr->draw();

  return 0;
}

/*
Drawing Circle
Drawing Circle
*/
