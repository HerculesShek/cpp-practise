#include <iostream>
#include <vector>
#include <string>

using namespace std;

int main()
{
  string s = "no ";
  vector<string> sv{10};
  for(int i = 0; i!=10; ++i){
	sv.push_back(s+to_string(i));
  }
  for(string str : sv)
	str = "aaaaaaaaaa";

  for(string s : sv)
	cout << s << endl;

  vector<int> iv{1,2,3,4};
  for(int i : iv)
	i *= i;

  for(int i : iv)
	cout << i << endl;


  string name("aaa");
  for(char c : name)
	c = 'b';

  cout << name << endl;

  int nums[] = {1,2,3};
  for(int i : nums)
	i += 1;
  
  for(int i : nums)
	cout << i << endl;


  vector<string> strv1{"asdf", "ddd", "333"};
  vector<string> strv2{"aa", "ddd"};
  if(strv1 < strv2)
	cout << "got it" << endl;
  return 0;
}
