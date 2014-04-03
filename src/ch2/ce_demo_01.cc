#include <iostream>
using namespace std;

int main()
{
  const int max_files = 20; //max_files is a constant expression 
  const int limit = max_files + 1; //limit is a constant expression
  int staff_size = 27; //staff_size is not a constant expression
  const int sz = get_size(); //sz is not a constant expression
  return 0;
}
