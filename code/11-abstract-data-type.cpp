#include <iostream>
using namespace std;

class Stack {
private:
  int arr[5];
  int topIndex;

public:
  Stack() { topIndex = -1; }

  void push(int value) {
    if (topIndex >= 4) {
      cout << "Stack Overflow" << endl;
      return;
    }
    topIndex++;
    arr[topIndex] = value;
  }

  void pop() {
    if (topIndex < 0) {
      cout << "Stack Underflow" << endl;
      return;
    }
    topIndex--;
  }

  int top() {
    if (topIndex < 0) {
      cout << "Stack is empty" << endl;
      return -1;
    }
    return arr[topIndex];
  }

  bool isEmpty() { return (topIndex < 0); }
};

int main() {
  Stack s;

  s.push(10);
  s.push(20);
  s.push(30);

  cout << "Top element: " << s.top() << endl;
  s.pop();
  cout << "Top after pop: " << s.top() << endl;

  return 0;
}

/*
Top element: 30
Top after pop: 20
*/
