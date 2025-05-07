#include <iostream>
using namespace std;

class Complex {
public:
  int real;
  int imag;
  Complex(int r, int i) {
    real = r;
    imag = i;
  }
  Complex operator+(const Complex &other) {
    return Complex(real + other.real, imag + other.imag);
  }
  void display() { cout << real << " + " << imag << "i" << endl; }
};

int main() {
  Complex c1(1, 2);
  Complex c2(3, 4);
  Complex c3 = c1 + c2;
  c3.display();
  return 0;
}

/*
4 + 6i
*/
