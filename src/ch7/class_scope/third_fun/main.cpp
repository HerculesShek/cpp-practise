#include "quiz.h"
#include <iostream>
using namespace std;
int main(){
    Quiz q;
    q.verify(1);
    cout << q.show(1) << endl;
    return 0;
}