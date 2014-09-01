#include "quiz.h"
#include "tools.h"

void Quiz::verify(pos i){
    scores[i] = update(scores[i]);
}

Quiz::Quiz(){
    scores.push_back(50);
    scores.push_back(120);
}
