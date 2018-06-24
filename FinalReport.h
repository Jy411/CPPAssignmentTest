#pragma once
//
// Created by Jinyung Tan on 23/06/2018.
// Edited by Abduzarif Madraimov on 23/06/2018.
// Approved by Raynald Vun on 23/06/2018
// Compiled by Nazmi Munya on 23/06/2018

#ifndef CPPASSIGNMENT_FINALREPORT_H
#define CPPASSIGNMENT_FINALREPORT_H

#include<iostream>
#include <vector>
#include "Subject.h"
#include "Student.h"
#include "Class.h"
#include "SubjectScore.h"

using namespace std;

class FinalReport {
private:
    // STUDENT
    int studentNo;
    string firstName;
    string lastName;
    char gender;
    // CLASS STUDENT IS IN
    int classID;
    string className;
    int yearForm; // FORM 1 TO FORM 5
    char yearGrade; // Lower Secondary/Upper Secondary Art or Science
    // SUBJECTS STUDENT IS TAKING
    int subjectID;
    string subjectName;
    char subjectType;
    // SUBJECT SCORE
    double score;
public:
    FinalReport();

    FinalReport(int studentNo, int classID);

    FinalReport(int studentNo, const string &firstName, const string &lastName, char gender, int classID, const string &className, int yearForm,
                char yearGrade, int subjectID, const string &subjectName, char subjectType, double score);

    int getStudentNo() const;

    void setStudentNo(int studentNo);

    const string &getFirstName() const;

    void setFirstName(const string &firstName);

    const string &getLastName() const;

    void setLastName(const string &lastName);

    char getGender() const;

    void setGender(char gender);

    int getClassID() const;

    void setClassID(int classID);

    const string &getClassName() const;

    void setClassName(const string &className);

    int getYearForm() const;

    void setYearForm(int yearForm);

    char getYearGrade() const;

    void setYearGrade(char yearGrade);

    int getSubjectID() const;

    void setSubjectID(int subjectID);

    const string &getSubjectName() const;

    void setSubjectName(const string &subjectName);

    char getSubjectType() const;

    void setSubjectType(char subjectType);

    double getScore() const;

    void setScore(double score);

};


#endif //CPPASSIGNMENT_FINALREPORT_H
