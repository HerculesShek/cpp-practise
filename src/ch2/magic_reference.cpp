#include <iostream>
using namespace std;
using ref = int&;
using cref = const int&;
int main(){
    int magic = 42;
    const ref mr = magic; 
    mr++; // mr is not a 'const reference' 
    cout << magic << endl;
    //ref can't refer to a const int! 
    const int age = 24;
    // const ref age_r = age; // error!
    cref age_ref = age;
    cout << age_ref << endl;
 
    // Remember! when decltype deduce a reference, never use const!!
    //const decltype(age_ref) age_ref2 = age;
    //cout << age_ref2 << endl;

    // const decltype(mr) mr2 = magic;
    // cout << mr2 << endl;
    
    return 0;
}