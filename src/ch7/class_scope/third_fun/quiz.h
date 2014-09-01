#ifndef _QUIZ_H
#define _QUIZ_H
#include <vector>

class Quiz{
public:
    typedef std::vector<int>::size_type pos;
    void verify(pos i);
    Quiz();
    int &show(pos i){return scores[i];}
private:
    std::vector<int> scores;
};
#endif