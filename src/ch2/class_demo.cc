#include <iostream>

using namespace std;

struct Sales_data{
  std::string bookno;
  unsigned units_sold = 0;
  double revenue = 0.0;
};
int main(){
  Sales_data a,b, *salesptr;
  cout << a.bookno << endl;

  return 0;
}
