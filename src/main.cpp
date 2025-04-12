// Copyright (c) 2025 UnEmotioneD

#include <fstream>
#include <iostream>
#include <list>
#include <sstream>
#include <string>

#include "../include/Student.h"

using std::cout;
using std::endl;
using std::ifstream;
using std::istringstream;
using std::list;
using std::string;

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
        student.avg = static_cast<float>(student.tot) / 3;

        stdList.push_back(student);
    }
    stdFile.close();

    for (auto s : stdList) {
        cout << s.name << " - average score: " << s.avg << endl;
    }

    return 0;
}
