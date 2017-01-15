#include <iostream>
#include <fstream>
#include "../templates/cyclicList.cpp"

using namespace std;

void tail(string filename, int lines) {
  ifstream fin(filename);
  if (!fin) {
    throw "File not found";
  }

  int linesCount = 0;


  cyclicList<string> bufferLines;
  // string * bufferLines = new string[lines];

  char buf[2000];
  while (fin.getline(buf, 2000)) {
    if (!(bufferLines.length() < lines)) {
      bufferLines.iterStart();

      string _deletedElem;
      bufferLines.deleteElem(bufferLines.iter(), _deletedElem);
    }
    bufferLines.toEnd(string(buf));
  }
  fin.close();


  bufferLines.print();
}

int main(){
  tail("input.txt", 2);

  return 0;
}
