#include <fstream>
#include <iostream>
#include <string>
using namespace std;

int main() {
  string sourceFile = "source.txt";
  string destinationFile = "copy.txt";

  ifstream inFile(sourceFile);
  ofstream outFile(destinationFile);

  if (!inFile || !outFile) {
    cerr << "Error opening files!" << endl;
    return 1;
  }

  string line;
  while (getline(inFile, line)) {
    outFile << line << endl;
  }

  cout << "File copied successfully" << endl;

  inFile.close();
  outFile.close();
  return 0;
}

/*
File copied successfully
*/
