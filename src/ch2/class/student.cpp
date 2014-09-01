#include <string>
#include <iostream>
using namespace std;

struct Student{
    string name;
    int age = {24};
    double score = .0;
    Student(){};
    void say(){
        cout << "\tHi, my name is " << name << ", I am "
             << age << " years old, my score is " << score << endl;
    }
};

int main(){
    Student s;
    s.say();

    return 0;
}
