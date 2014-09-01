typedef double Money;
class Accout{
public:
    using Money = double;
    Money balace(){return bal;}
private:
    Money bal = 100.0;
};

#include <iostream>
using namespace std;
int main(){
    Accout a;
    cout << a.balace() << endl;
    return 0;
}