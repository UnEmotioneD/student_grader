#include <cstdio>
#include <fstream>
#include <iostream>
#include <string>

using namespace std;

int main() {

  // read file
  ifstream theFile;
  theFile.open("./student_scores.txt");

  string studentScores = "";

  while (getline(theFile, studentScores)) {
    cout << studentScores;
  }

  cout << studentScores + "\n" << endl;

  return 0;
}
