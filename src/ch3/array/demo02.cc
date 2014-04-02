#include <iostream>
#include <cstddef>
#include <string>

using namespace std;

int main()
{
  string nums[] = {"one", "two", "three"};
  string *a = &nums[0];
  string *b = nums;
  if(a==b)
	cout<< "a is b"<< endl;
  return 0;
}
