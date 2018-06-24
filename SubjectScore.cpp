//
// Created by Jinyung Tan on 21/06/2018.
//

#include "SubjectScore.h"

SubjectScore::SubjectScore() {}

SubjectScore::SubjectScore(double score) : score(score) {}

double SubjectScore::getScore() const {
    return score;
}

void SubjectScore::setScore(double score) {
    SubjectScore::score = score;
}

const Subject &SubjectScore::getSubject() const {
    return subject;
}

void SubjectScore::setSubject(const Subject &subject) {
    SubjectScore::subject = subject;
}

SubjectScore::SubjectScore(const Subject &subject, double score) : subject(subject), score(score) {}
