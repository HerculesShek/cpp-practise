#ifndef _QUIZ_H
#define _QUIZ_H
#include <vector>

class Quiz{
public:
    typedef unsigned score;
    typedef std::vector<score>::size_type pos;
    void verify(pos i);
    Quiz();
    score &show(pos i){return scores[i];}
private:
    std::vector<score> scores;
};
#endif