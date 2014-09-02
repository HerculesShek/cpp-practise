#include <iostream>
using namespace std;

class X{
    int i;
    int j;
public:
    X(int val):j(val), i(j) {
      cout << "i is " << i << ", j is " << j << endl;
    }
};

int main()
{
    X x(4);
    return 0;
}
