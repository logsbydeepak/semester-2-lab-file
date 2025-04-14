#include <iostream>
using namespace std;

class Counter {
  static int count;

public:
  static void showCount() {
    cout << "Count: " << count << endl;
  }
  static void increment() {
    count++;
  }
};

int Counter::count = 0;
int main() {
  Counter::showCount();
  Counter::increment();
  Counter::increment();
  Counter::showCount();
  return 0;
}

/*
Count: 0
Count: 2
*/
