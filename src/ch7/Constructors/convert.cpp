#include <iostream>
using namespace std;

class Inte{
public:
    Inte(int i):inte(i){}
    void show(){cout << inte << endl;}
private:
    int inte;
};

int main(){
    Inte i = 100;
    i.show();
    return 0;
}