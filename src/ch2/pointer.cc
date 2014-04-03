#include <iostream>
using namespace std;

int main()
{
	// int *p = 32; // error
	int *p = 0;
	cout << p << endl;

	int *p1, *p2;
	if(p1 == p2) // generate false
		cout<<"p1 == p2" << endl;

	int *p3 = 0;
	int *p4 = 0;
	if(p3 == p4) // generate true
		cout<<"p3 == p4" << endl;

	return 0;
}
