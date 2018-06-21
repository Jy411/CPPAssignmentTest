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
