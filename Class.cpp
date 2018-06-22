//
// Created by Jinyung Tan on 21/06/2018.
//

#include "Class.h"

Class::Class() {}

Class::Class(int classID, const string &className, int yearForm, char yearGrade) : classID(classID),
                                                                                   className(className),
                                                                                   yearForm(yearForm),
                                                                                   yearGrade(yearGrade) {}

int Class::getClassID() const {
    return classID;
}

void Class::setClassID(int classID) {
    Class::classID = classID;
}

const string &Class::getClassName() const {
    return className;
}

void Class::setClassName(const string &className) {
    Class::className = className;
}

int Class::getYearForm() const {
    cout << "Form ";
    return yearForm;
}

void Class::setYearForm(int yearForm) {
    Class::yearForm = yearForm;
}

char Class::getYearGrade() const {
    if (yearGrade == '1'){
        cout << "Lower Secondary - ";
        return yearGrade;
    }
    else if (yearGrade == '2') {
        cout << "Upper Secondary Art - ";
        return yearGrade;
    }
    else if (yearGrade == '3'){
        cout << "Upper Secondary Science - ";
        return yearGrade;
    }
    else{
        return yearGrade;
    }
}

void Class::setYearGrade(char yearGrade) {
    Class::yearGrade = yearGrade;
}
