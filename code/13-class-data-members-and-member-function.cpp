#include <iostream>
using namespace std;

class BankAccount {
  double balance; // data member

public:
  // member function
  void setBalance(int value) { balance = value; }
  int getBalance() { return balance; }
};

int main() {
  BankAccount acc;
  acc.setBalance(100);
  cout << "Balance = " << acc.getBalance() << endl;
  return 0;
}

/*
Balance = 100
 */
