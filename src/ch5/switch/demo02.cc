#include <iostream>
using namespace std;

int main()
{
  unsigned int vowelCnt = 0;
  
  char ch;
  while(cin >> ch){
	switch(ch){
	case 'a':
	case 'e':
	case 'i':
	case 'o':
	case 'u':
	  vowelCnt++;
	  //break;
	}
  }
  cout << vowelCnt << endl;
  return 0;
}
