#include <iostream>
#include <vector>
#include "Sales_item.h"
using namespace std;

using S = Sales_item;

int main()
{
  vector<int> a = {1,2,3,4,5,6,7,4,4,4,4,4,4,4,4,33};
  auto len =  sizeof a;
  cout << len << endl;
  return 0;
}
 
