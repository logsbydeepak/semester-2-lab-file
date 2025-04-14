#include <iostream>
using namespace std;

class Counter {
public:
  static int count;

  Counter() {
    count++;
  }
  void showCount() {
    cout << "Count: " << count << endl;
  }
};

int Counter::count = 0;

int main() {
  Counter a, b, c;
  a.showCount();
  b.showCount();
  c.showCount();
  return 0;
}

/*
Count: 3
Count: 3
Count: 3
*/
