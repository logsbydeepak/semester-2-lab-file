#include <iostream>
using namespace std;

class Car {
public:
  Car() {
    cout << "Car object created!" << endl;
  }
  ~Car() {
    cout << "Car object destroyed!" << endl;
  }
};

int main() {
  Car myCar;
  return 0;
}

/*
Car object created!
Car object destroyed!
*/
