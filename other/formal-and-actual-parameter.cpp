#include <iostream>
using namespace std;

int sum(int a, int b) { // formal parameter
  return a + b;
}

int main() {
  int x = 5;
  int y = 10;
  int total = sum(x, y);
  cout << "Sum: " << total << endl;
  return 0;
}

/*
Sum: 15
*/
