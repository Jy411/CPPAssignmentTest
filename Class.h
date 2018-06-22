//
// Created by Jinyung Tan on 21/06/2018.
//


#ifndef CPPASSIGNMENT_CLASS_H
#define CPPASSIGNMENT_CLASS_H

#include <iostream>
#include <string>

using namespace std;

class Class {
private:
    int classID;
    string className;
    int yearForm; // FORM 1 TO FORM 5
    char yearGrade; // Lower Secondary/Upper Secondary Art or Science
public:
    Class();
    Class(int classID, const string &className, int yearForm, char yearGrade);

    int getClassID() const;
    void setClassID(int classID);
    const string &getClassName() const;
    void setClassName(const string &className);
    int getYearForm() const;
    void setYearForm(int yearForm);
    char getYearGrade() const;
    void setYearGrade(char yearGrade);
};


#endif //CPPASSIGNMENT_CLASS_H
