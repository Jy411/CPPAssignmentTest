//
// Created by Jinyung Tan on 21/06/2018.
//

#ifndef CPPASSIGNMENT_SUBJECTSCORE_H
#define CPPASSIGNMENT_SUBJECTSCORE_H


#include "Subject.h"

class SubjectScore {
private:
     Subject subject;
     double score;
public:
    SubjectScore();

    SubjectScore(const Subject &subject, double score);

    SubjectScore(double score);
    double getScore() const;
    void setScore(double score);

    const Subject &getSubject() const;
    void setSubject(const Subject &subject);

};


#endif //CPPASSIGNMENT_SUBJECTSCORE_H
