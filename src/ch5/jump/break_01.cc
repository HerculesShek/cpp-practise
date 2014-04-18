#include <iostream>
using namespace std;

int main()
{
  for(int i=1; i!=10; ++i){
	for(int j=1; j<=i;++j){
	  if(j==5)
		continue;
	  cout << i << "*" << j << "=" << (i*j) << " ";
	}
	cout << endl;
  }

  return 0;
} 
