
#include <iostream>
using namespace std;

class Student {
  int roll;
  string name;

public:
  Student(int r, string n) : roll(r), name(n) {
    cout << "Roll: " << roll << endl;
    cout << "Name: " << name << endl;
  }
};

int main() {
  Student s1(101, "Raunak");
  return 0;
}

/*
Roll: 101
Name: Raunak
*/
