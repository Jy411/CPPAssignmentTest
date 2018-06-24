//
// Created by Jinyung Tan on 19/06/2018.
//
#include <iostream>
#include <string>

using namespace std;

#ifndef CPPASSIGNMENT_SUBJECT_H
#define CPPASSIGNMENT_SUBJECT_H


class Subject {
private:
    int subjectID;
    string subjectName;
    char subjectType;

public:
    Subject();
    Subject(int subjectID, const string &subjectName, char subjectType);

    int getSubjectID() const;
    void setSubjectID(int subjectID);
    const string &getSubjectName() const;
    void setSubjectName(const string &subjectName);
    char getSubjectType() const;
    void setSubjectType(char subjectType);

};


#endif //CPPASSIGNMENT_SUBJECT_H
