#include <iostream>
using namespace std;

class Person {
private:
  string name;
  int age;

public:
  void setValue(string name, int age);

  void display();
};

void Person::setValue(string name, int age) {
  this->name = name;
  this->age = age;
}
void Person::display() {
  cout << "Name: " << this->name << ", Age: " << this->age << endl;
}

int main() {
  Person p1;
  p1.setValue("Raunak", 19);
  p1.display();
  return 0;
}

/*
Name: Raunak, Age: 18
*/
