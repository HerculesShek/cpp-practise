#include <iostream>
using namespace std;
class Stu{
public:
    Stu(int i):age(i){
        cout << age << endl;
    }
private:
    int age = 18;
};

int main(){
    Stu s(24);
    return 0;
}