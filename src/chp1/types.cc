#include <iostream>
using namespace std;

int main() {
	int ival = 42;
	int &refVal = ival;
	int *ip = &refVal;
	int *p = &ival;

	std::cout << ival << " " << ip << '\n'<< p << std::endl;
	return 0;
}
 
