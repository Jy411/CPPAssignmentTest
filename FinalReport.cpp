//
// Created by Jinyung Tan on 23/06/2018.
// Edited by Abduzarif Madraimov on 23/06/2018.
// Approved by Raynald Vun on 23/06/2018
// Compiled by Nazmi Munya on 23/06/2018
#include "FinalReport.h"

FinalReport::FinalReport() {}

FinalReport::FinalReport(int studentNo, const string &firstName, const string &lastName, char gender, int classID, const string &className,
                         int yearForm, char yearGrade, int subjectID, const string &subjectName, char subjectType,
                         double score) : studentNo(studentNo), firstName(firstName), lastName(lastName), gender(gender), classID(classID),
                                         className(className), yearForm(yearForm), yearGrade(yearGrade),
                                         subjectID(subjectID), subjectName(subjectName), subjectType(subjectType),
                                         score(score) {}

int FinalReport::getStudentNo() const {
    return studentNo;
}

void FinalReport::setStudentNo(int studentNo) {
    FinalReport::studentNo = studentNo;
}

const string &FinalReport::getFirstName() const {
    return firstName;
}

void FinalReport::setFirstName(const string &firstName) {
    FinalReport::firstName = firstName;
}
const string &FinalReport::getLastName() const {
    return lastName;
}

void FinalReport::setLastName(const string &lastName) {
    FinalReport::lastName = lastName;
}
char FinalReport::getGender() const {
    return gender;
}

void FinalReport::setGender(char gender) {
    FinalReport::gender = gender;
}

int FinalReport::getClassID() const {
    return classID;
}

void FinalReport::setClassID(int classID) {
    FinalReport::classID = classID;
}

const string &FinalReport::getClassName() const {
    return className;
}

void FinalReport::setClassName(const string &className) {
    FinalReport::className = className;
}

int FinalReport::getYearForm() const {
    return yearForm;
}

void FinalReport::setYearForm(int yearForm) {
    FinalReport::yearForm = yearForm;
}

char FinalReport::getYearGrade() const {
    return yearGrade;
}

void FinalReport::setYearGrade(char yearGrade) {
    FinalReport::yearGrade = yearGrade;
}

int FinalReport::getSubjectID() const {
    return subjectID;
}

void FinalReport::setSubjectID(int subjectID) {
    FinalReport::subjectID = subjectID;
}

const string &FinalReport::getSubjectName() const {
    return subjectName;
}

void FinalReport::setSubjectName(const string &subjectName) {
    FinalReport::subjectName = subjectName;
}

char FinalReport::getSubjectType() const {
    return subjectType;
}

void FinalReport::setSubjectType(char subjectType) {
    FinalReport::subjectType = subjectType;
}

double FinalReport::getScore() const {
    return score;
}

void FinalReport::setScore(double score) {
    FinalReport::score = score;
}

