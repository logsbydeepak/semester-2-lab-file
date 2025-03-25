#include <iostream>
#include <vector>
using namespace std;

int main() {
  vector<int> nums = {10, 20, 30, 40};

  nums.push_back(50);

  cout << "Vector elements: ";
  for (int i = 0; i < nums.size(); i++) {
    cout << nums[i] << " ";
  }
  cout << endl;

  cout << "Element at index 2: " << nums[2] << endl;
  nums.pop_back();
  cout << "Size after pop: " << nums.size() << endl;

  return 0;
}

/*
Vector elements: 10 20 30 40 50
Element at index 2: 30
Size after pop: 4
*/
