//
// Created by Jinyung Tan on 21/06/2018.
//

#ifndef CPPASSIGNMENT_SUBJECTSCORE_H
#define CPPASSIGNMENT_SUBJECTSCORE_H


class SubjectScore {
private:
     double score;
public:
    SubjectScore();
    SubjectScore(double score);
    double getScore() const;
    void setScore(double score);

};


#endif //CPPASSIGNMENT_SUBJECTSCORE_H
