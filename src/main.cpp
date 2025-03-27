#include <cstdio>
#include <fstream>
#include <iostream>
#include <list>
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

    list<Student> studentList;

    // assign contents of file to string variable
    string stdInfo = "";
    int studentCnt = 0;
    while (getline(stdFile, stdInfo)) {
        cout << stdInfo << endl;
        student.name = stdInfo;
        studentList.push_back(student);
        studentCnt++;
    }

    cout << endl << "Number of students: " << studentCnt << endl;

    for (auto s : studentList) {
        cout << s.name << endl;
    }

    return 0;
}
