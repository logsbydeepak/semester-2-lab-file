#include <iostream>
using namespace std;

template <typename T> void swap(T *var1, T *var2) {
  T temp = *var1;
  *var1 = *var2;
  *var2 = temp;
}

int main() {
  int num1 = 1, num2 = 2;
  cout << "Swap integer" << endl;
  cout << "Before:" << endl;
  cout << "num1 = " << num1 << ", num2 = " << num2 << endl;
  swap(num1, num2);
  cout << "After:" << endl;
  cout << "num1 = " << num1 << ", num2 = " << num2 << endl;

  char char1 = 'A', char2 = 'B';
  cout << "Swap character" << endl;
  cout << "Before:" << endl;
  cout << "char1 = " << char1 << ", char2 = " << char2 << endl;
  swap(&char1, &char2);
  cout << "After:" << endl;
  cout << "char1 = " << char1 << ", char2 = " << char2 << endl;
  return 0;
}
/*
Swap integer
Before:
num1 = 1, num2 = 2
After:
num1 = 2, num2 = 1
Swap character
Before:
char1 = A, char2 = B
After:
char1 = B, char2 = A
*/
