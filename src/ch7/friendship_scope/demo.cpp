#include <iostream>
#include <string>
using namespace std;

class X{
public:
    friend void f(const X &x){
        cout << "the name of x is " << x.info << endl;
    }
    friend void setinfo(X &x, const string &info){
        x.info = info;
    }
    friend void m(const X &x){}
    X(){f(*this);}
    void g();
    void mm(){m(*this);}
private:
    string info = string("Jack");
};

void X::g(){
    f(*this);
}

int main(){
    X x;
    x.g();
    f(x);
    setinfo(x, "Hanks");
    x.g();

    return 0;
}

