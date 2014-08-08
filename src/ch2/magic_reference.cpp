#include <iostream>
using namespace std;
using ref = int&;
int main(){
    int magic = 42;
    const ref mr = magic;
    mr++;
    cout << magic << endl;
    //ref can't refer to a const int! 
    const int age = 24;
    const ref age_ref = age;
    cout << age << endl;
    return 0;
}