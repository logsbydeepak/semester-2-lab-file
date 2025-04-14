#include <iostream>
using namespace std;

class Book {
  string title;
  int pages;

public:
  Book(string t, int p) {
    title = t;
    pages = p;
  }

  void display() const {
    cout << "Title: " << title << endl;
    cout << "Pages: " << pages << endl;
  }

  void updatePages(int newPages) {
    pages = newPages;
  }
};

int main() {
  const Book b("The Kite Runner", 352);
  b.display();
  // cannot call non-const function(b.updatePages(250)) on const object
  return 0;
}

/*
Title: The Kite Runner
Pages: 352
 */
