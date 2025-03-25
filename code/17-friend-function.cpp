#include <iostream>
using namespace std;

class Box {
private:
  int length;

public:
  void setLength(int length) {
    this->length = length;
  }

  friend void showLength(Box b);
};

void showLength(Box b) { cout << "Length of the box: " << b.length << endl; }

int main() {
  Box b1;
  b1.setLength(20);
  showLength(b1);

  return 0;
}

/*
Length of the box: 20
*/
