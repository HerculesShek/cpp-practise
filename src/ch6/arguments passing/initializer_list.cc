#include <iostream>
#include <initializer_list>

using namespace std;


void error_message(initializer_list<string> li)
{
  for(auto beg= li.begin(); beg != li.end(); ++beg){
	cout << *beg << endl;
  }
}


int main()
{
  initializer_list<string> ss{"aaaaa", "bbbbb", "ccccc"};
  error_message(ss);
  error_message({"eeeeeee", "fffffff"});
  return 0;
} 
