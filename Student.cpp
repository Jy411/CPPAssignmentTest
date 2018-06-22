//
// Created by Jinyung Tan on 22/06/2018.
//

#include "Student.h"

Student::Student() {}

Student::Student(int studentNo, const string &fullName, char gender) : studentNo(studentNo), fullName(fullName),
                                                                       gender(gender) {}

int Student::getStudentNo() const {
    return studentNo;
}

void Student::setStudentNo(int studentNo) {
    Student::studentNo = studentNo;
}

const string &Student::getFullName() const {
    return fullName;
}

void Student::setFullName(const string &fullName) {
    Student::fullName = fullName;
}

char Student::getGender() const {
    if (gender == 'M'){
        cout << "Male - ";
        return gender;
    }
    else if (gender == 'F'){
        cout << "Female - ";
        return gender;
    }
}

void Student::setGender(char gender) {
    Student::gender = gender;
}

string Student::getTotalScore() {

}

char Student::getFinalGrade() {

}

char ArtStudent::getFinalGrade() {
    return Student::getFinalGrade();
}

char ScienceStudent::getFinalGrade() {
    return Student::getFinalGrade();
}
