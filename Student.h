#pragma once
//
// Created by Jinyung Tan on 23/06/2018.
// Edited by Abduzarif Madraimov on 23/06/2018.
// Approved by Raynald Vun on 23/06/2018
// Compiled by Nazmi Munya on 23/06/2018

#ifndef CPPASSIGNMENT_STUDENT_H
#define CPPASSIGNMENT_STUDENT_H

#include <iostream>

using namespace std;

class Student {
private:
    int studentNo;
    string firstName;
    string lastName;
    char gender;
public:
    Student();
    Student(int studentNo, const string &firstName,const string &lastName,char gender);
    int getStudentNo() const;
    void setStudentNo(int studentNo);
    const string &getFirstName() const;
    void setFirstName(const string &firstName);
    const string &getLastName() const;
    void setLastName(const string &lastName);
    char getGender() const;
    void setGender(char gender);
    string getTotalScore();
    virtual char getFinalGrade();

};

class ArtStudent : public Student {
public:
    char getFinalGrade();
};

class ScienceStudent : public Student {
public:
    char getFinalGrade();
};

#endif //CPPASSIGNMENT_STUDENT_H
