#include <iostream>
using namespace std;

class Circle {
  const float pi;
  float radius;

public:
  Circle(float r) : pi(3.14) {
    radius = r;
  }
  float area() {
    return pi * radius * radius;
  }
};

int main() {
  Circle c(5);
  cout << "Area: " << c.area() << endl;
  return 0;
}
/*
Area: 78.5
*/
