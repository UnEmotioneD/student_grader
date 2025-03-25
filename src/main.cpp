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
    ifstream stdFile;
    stdFile.open("./student_scores.txt");

    // assign contents of file to string variable
    string stdInfo = "";
    while (getline(stdFile, stdInfo)) {
        cout << stdInfo << endl;
    }

    return 0;
}
