#include <iostream>
#include <fstream>
using namespace std;

int main() {
  ifstream file("bigfile.txt");

  int words = 0;

  bool inWord = false;
  char c;

  while (file.get(c)) {
    if (('a' <= c && c <= 'z') || ('A' <= c && c <= 'Z')) {
      inWord = true;
      // cout << c;
    } else {
      if (inWord) {
        words++;
        // cout << endl;
      }
      inWord = false;
    }
  }

  cout << "Words: " << words << endl;

  file.close();
}
