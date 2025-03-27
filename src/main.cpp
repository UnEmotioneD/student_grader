#include <cstdio>
#include <fstream>
#include <iostream>
#include <list>
#include <sstream>
#include <string>

using namespace std;

class Student {
  public:
    int no;
    string name;
    int kor;
    int eng;
    int math;
    int tot;
    float avg;
    char grade;
    int rank;
};

int main() {
    // read file
    ifstream stdFile;
    stdFile.open("./student_scores.txt");

    Student student;
    list<Student> stdList;

    // assign contents of file to string variable
    string stdInfo = "";
    while (getline(stdFile, stdInfo)) {
        int kor = 0;
        int eng = 0;
        int math = 0;

        istringstream iss(stdInfo);
        iss >> student.no >> student.name >> kor >> eng >> math;

        student.kor = kor;
        student.eng = eng;
        student.math = math;
        student.tot = kor + eng + math;
        float tot = static_cast<float>(student.tot);
        student.avg = tot / 3;

        stdList.push_back(student);
    }
    stdFile.close();

    for (auto s : stdList) {
        cout << s.avg << endl;
    }

    return 0;
}
