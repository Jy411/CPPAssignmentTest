//
// Created by Jinyung Tan on 22/06/2018.
//

#ifndef CPPASSIGNMENT_STUDENT_H
#define CPPASSIGNMENT_STUDENT_H

#include <iostream>

using namespace std;

class Student {
private:
    int studentNo;
    string fullName;
    char gender;
public:
    Student();
    Student(int studentNo, const string &fullName, char gender);
    int getStudentNo() const;
    void setStudentNo(int studentNo);
    const string &getFullName() const;
    void setFullName(const string &fullName);
    char getGender() const;
    void setGender(char gender);
    string getTotalScore();
    char getFinalGrade();

};


#endif //CPPASSIGNMENT_STUDENT_H
