//
// Created by Jinyung Tan on 19/06/2018.
//
#include <iostream>
#include "Subject.h"

Subject::Subject() {

}

Subject::Subject(int subjectID, const string &subjectName, char subjectType) : subjectID(subjectID),
                                                                               subjectName(subjectName),
                                                                               subjectType(subjectType) {}


int Subject::getSubjectID() const {
    return subjectID;
}

void Subject::setSubjectID(int subjectID) {
    Subject::subjectID = subjectID;
}

const string &Subject::getSubjectName() const {
    return subjectName;
}

void Subject::setSubjectName(const string &subjectName) {
    Subject::subjectName = subjectName;
}

char Subject::getSubjectType() const {
    return subjectType;
}

void Subject::setSubjectType(char subjectType) {
    Subject::subjectType = subjectType;
}

void Subject::addSubject(int id, string name, char type) {
//    cout << "What is the subject ID?" << endl << "Enter ID: ";
//    cin >> id;
//    cout << "What is the subject name?" << endl << "Enter name: ";
//    cin >> name;
//    cout << "What is the subject type(C for Core/S for Selective)?" << endl << "Enter character: ";
//    cin >> type;

    Subject subject;
    subject.subjectID = id;
    subject.subjectName = name;
    subject.subjectType = type;

    cout << "Subject ID: " << id << endl;
    cout << "Subject Name: " << name << endl;
    cout << "Subject Type: " << type << endl;
}

