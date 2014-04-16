#include <iostream>
#include <cctype>
using namespace std;

int main()
{
  int cnt = 0;
  for(char start = 0x00; start != 0x7f; ++start){
	if(ispunct(start)){
	  cout << start << " " ;
	  ++cnt;
	}
	if(cnt % 15 == 0)
	  cout << endl;
  }

  cout << cnt << endl;
  
  if(isspace(' '))
	cout << "space is empty" << endl;

  return 0;
} 
