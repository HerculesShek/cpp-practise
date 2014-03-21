#include <iostream>
#include "Sales_item.h"
using namespace std;
int main()
{
  Sales_item book;
  std::cin >> book;

  std::cout << book << std::endl;

  Sales_item item1, item2;
  std::cin >> item1 >> item2; // read a pair of transactions
  if(item1.isbn() == item2.isbn())
	std::cout << item1 + item2 << std::endl; // print their sum
  else{
	cerr << "error"<<endl;
	return -1;
  }
  return 0;
}
 
