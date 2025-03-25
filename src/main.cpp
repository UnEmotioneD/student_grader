#include <cstdio>
#include <fstream>
#include <iostream>
#include <string>

using namespace std;

class Student {
  public:
    int no;
    string name;
    int kor;
    int eng;
    int math;
    int total;
    float avg;
    char grade;
    int rank;
};

int main() {
    Student student;

    // read file
    ifstream theFile;
    theFile.open("./student_scores.txt");

    string studentScores = "";

    while (getline(theFile, studentScores)) {
        cout << studentScores << endl;
    }

    return 0;
}
