#include <iostream>
using namespace std;

int main() {
  int *num = new int(1);
  cout << "num = " << *num << endl;
  delete num;
  return 0;
}

/*
num = 1
*/
