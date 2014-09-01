class X{
public:
    friend void f(const X &x){}
    X(){f(*this);}
    void g();
};

void X::g(){f(*this);}

int main(){
    X x;
    x.g();
    return 0;
}

