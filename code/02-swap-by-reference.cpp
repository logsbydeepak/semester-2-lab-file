#include <iostream>

using namespace std;

void swap(int &num1, int &num2) {
  int temp = num1;
  num1 = num2;
  num2 = temp;
}

int main() {
  int num1 = 1, num2 = 2;
  cout << "Before:" << endl;
  cout << "num1 = " << num1 << ", num2 = " << num2 << endl;
  swap(num1, num2);
  cout << "After:" << endl;
  cout << "num1 = " << num1 << ", num2 = " << num2 << endl;

  return 0;
}

/*
Before:
num1 = 1, num2: 2
After:
num1 = 2, num2: 1
*/
