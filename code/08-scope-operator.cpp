#include <iostream>
using namespace std;

int num = 10;

int main() {
  int num = 2;
  cout << "Local num = " << num << endl;
  cout << "Global num = " << ::num << endl;

  return 0;
}

/*
Local num = 2
Global num = 10
*/
