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
  Person(const Person &obj) {
    this->name = obj.name;
    this->age = obj.age;
  }
  void display() {
    cout << "Name: " << this->name << ", Age: " << this->age << endl;
  }
};

int main() {
  Person p1("Raunak", 19);
  Person p2(p1);
  Person p3 = p1;

  p1.display();
  p2.display();
  p3.display();

  return 0;
}

/*
Name: Raunak, Age: 19
Name: Raunak, Age: 19
Name: Raunak, Age: 19
*/
