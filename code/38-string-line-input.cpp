#include <iostream>
#include <string>
using namespace std;

int main() {
  string name;
  cout << "Enter your full name: ";
  getline(cin, name);
  cout << "Hi, " << name << endl;
  return 0;
}

/*
Enter your full name: Raunak Raj
Hi, Raunak Raj
*/
