#include <iostream>
using namespace std;

int main()
{
  char ch;
  while(cin >> ch){
	switch(ch){
	  int name;
	case 'a':
	  unsigned int vowelCnt;
	  name = (string("zhangsan")+to_string(vowelCnt)+'a').size();
	  cout << name << endl;
	  break;
	case 'e':
	  //int name;
	  vowelCnt++;
	  cout << vowelCnt << endl;
	  break;
	default:
	  break;
	}
  }
  return 0;
}
