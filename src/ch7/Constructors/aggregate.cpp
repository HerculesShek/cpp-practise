#include <string>
#include <iostream>
using namespace std;
struct info{
    string name;
    int age;
    double score;
};

int main(){
    info i = {"Jack", 23};
    cout << i.score << endl;
    return 0;
}