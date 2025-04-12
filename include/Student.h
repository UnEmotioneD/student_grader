// Copyright (c) 2025 UnEmotioneD

#ifndef INCLUDE_STUDENT_H_
#define INCLUDE_STUDENT_H_

#include <string>

using std::string;

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

#endif  // INCLUDE_STUDENT_H_
