#include <iostream>
#include "Sales_item.h"
#include <stdexcept>

using namespace std;

int main()
{
  Sales_item item1, item2;
  while(cin >> item1 >> item2){
	try{
	  if(item1.isbn() == item2.isbn()){
		cout << item1 + item2 << endl;
		return 0;
	  } else {
		throw runtime_error("Data must refer to same ISBN");
	  }
	} catch (runtime_error err){
	  cout << err.what()
		   << "\nTry Again? Enter y or n" << endl;
	  char c;
	  cin >> c;
	  if (!cin || c == 'n' || c=='N')
		break;
	}
  }
  return 0;
}
