#include <iostream>
using namespace std;

class Person {
private:
  string name;
  int age;

public:
  inline void setValue(string name, int age);
  inline void display();
};

inline void Person::setValue(string name, int age) {
  this->name = name;
  this->age = age;
}

inline void Person::display() {
  cout << "Name: " << this->name << ", Age: " << this->age << endl;
}

inline int sum(int num1, int num2) {
  return num1 + num2;
}

int main() {
  Person p1;
  p1.setValue("Raunak", 19);
  p1.display();
  cout << "Sum: " << sum(1, 2) << endl;
  return 0;
}

/*
Name: Raunak, Age: 19
Sum: 3
*/
