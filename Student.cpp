//
// Created by Jinyung Tan on 23/06/2018.
// Edited by Abduzarif Madraimov on 23/06/2018.
// Approved by Raynald Vun on 23/06/2018
// Compiled by Nazmi Munya on 23/06/2018
#include "Student.h"

Student::Student() {}

Student::Student(int studentNo, const string &firstName, const string &lastName, char gender) : studentNo(studentNo), firstName(firstName), lastName(lastName),
                                                                                                gender(gender) {}

int Student::getStudentNo() const {
    return studentNo;
}

void Student::setStudentNo(int studentNo) {
    Student::studentNo = studentNo;
}

const string &Student::getLastName() const {
    return lastName;
}

void Student::setLastName(const string &lastName) {
    Student::lastName = lastName;
}
const string &Student::getFirstName() const {
    return firstName;
}

void Student::setFirstName(const string &firstName) {
    Student::firstName = firstName;
}

char Student::getGender() const {
    if (gender == 'M') {
        cout << "Male - ";
        return gender;
    }
    else if (gender == 'F') {
        cout << "Female - ";
        return gender;
    }
}

void Student::setGender(char gender) {
    Student::gender = gender;
}

string Student::getTotalScore() {
    return "";
}

char Student::getFinalGrade() {
    return '0';
}

char ArtStudent::getFinalGrade() {
    return Student::getFinalGrade();
}

char ScienceStudent::getFinalGrade() {
    return Student::getFinalGrade();
}
