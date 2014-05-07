#include <string>
#include <iostream>
using namespace std;

string numbers("0123456789");
void find_all_nums(const string &s)
{
  string::size_type pos = 0;
  while((pos = s.find_first_of(numbers, pos)) != string::npos){
	cout << s[pos] << " at " << pos << endl;
	++pos;
  }
}


int main()
{
  string name("Annabell");
  auto i = name.find("Anna");
  cout << i << endl;
  
  string info("r2d2");
  auto pos = info.find_first_of(numbers);
  cout << pos << endl;

  string dept("03714p3");
  pos = dept.find_first_not_of(numbers);
  cout << pos << endl;


  string t("hert2y4tt7");
  find_all_nums(t);

  string river("Mississippi");
  auto a = river.find("is");
  auto b = river.rfind("is");
  cout << a << " " << b << endl;


  return 0;
}
