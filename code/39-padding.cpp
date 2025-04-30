#include <iomanip>
#include <iostream>
using namespace std;

int main() {
  int num = -42;

  cout << num << endl;
  cout << right << setfill('.') << setw(6) << num << endl;
  cout << left << setfill('-') << setw(6) << num << endl;
  cout << internal << setfill('*') << setw(6) << num << endl;

  return 0;
}
/*
-42
...-42
-42---
-***42
*/
