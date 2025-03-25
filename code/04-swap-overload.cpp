#include <iostream>
using namespace std;

void swap(int &num1, int &num2) {
  int temp = num1;
  num1 = num2;
  num2 = temp;
}

void swap(float &num1, float &num2) {
  float temp = num1;
  num1 = num2;
  num2 = temp;
}

int main() {
  int num1 = 1, num2 = 2;
  cout << "Swap integer" << endl;
  cout << "Before:" << endl;
  cout << "num1 = " << num1 << ", num2 = " << num2 << endl;
  swap(num1, num2);
  cout << "After:" << endl;
  cout << "num1 = " << num1 << ", num2 = " << num2 << endl;

  float float1 = 1, float2 = 2;
  cout << "Swap float" << endl;
  cout << "Before:" << endl;
  cout << "float1 = " << float1 << ", float2 = " << float2 << endl;
  swap(float1, float2);
  cout << "After:" << endl;
  cout << "float1 = " << float1 << ", float2 = " << float2 << endl;

  return 0;
}

/*
Swap integer
Before:
num1 = 1, num2 = 2
After:
num1 = 2, num2 = 1
Swap float
Before:
float1 = 1, float2 = 2
After:
float1 = 2, float2 = 1
*/
