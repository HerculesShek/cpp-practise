#include <iostream>
using namespace std;

int main(){
    char a = 0245;
    unsigned int b = 100;

    auto d = (unsigned int)a;
    cout << d << endl;
    auto c = b - a;
    cout << c << endl;
    auto e = b - d;
    cout << e << endl;
    return 0;
}