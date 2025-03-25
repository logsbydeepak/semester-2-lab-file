#include <iostream>
using namespace std;

class Person {
private:
  string name;
  int age;

public:
  Person(string name, int age) {
    this->name = name;
    this->age = age;
  }
  void display() {
    cout << "Name: " << this->name << ", Age: " << this->age << endl;
  }
};

inline int sum(int num1, int num2) { return num1 + num2; }

int main() {
  Person p1("Raunak", 19);
  p1.display();
  return 0;
}

/*
Name: Raunak, Age: 19
*/
