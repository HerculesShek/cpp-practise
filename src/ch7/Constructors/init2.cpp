#include <iostream>
using namespace std;
class Stu{
public:
    Stu(int i){
        cout << age << endl;
        age = i;
    }
private:
    int age;
};

int main(){
    Stu s(24);
    return 0;
}