#include <iostream>
using namespace std;

class Animal {
public:
  // Virtual function: enables runtime polymorphism
  virtual void sound() { cout << "Animal makes a sound" << endl; }
};

class Dog : public Animal {
public:
  // Overriding the base class virtual function
  void sound() override { cout << "Dog barks" << endl; }
};

int main() {
  Animal *ptr;
  Dog d;

  ptr = &d;
  ptr->sound();
  return 0;
}

/*
Dog barks
*/
