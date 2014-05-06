#include <string>
#include <iostream>
using namespace std;

void print(const string &s)
{
  cout << s << endl;
}

int main()
{
  string mess("I have a dream");
  mess.insert(mess.size(), 4, '!');
  print(mess);
  
  mess.erase(mess.size()-4, 4);
  print(mess);

  
  const char *cp = "Stately, plump Buck";
  mess.assign(cp, 7);
  print(mess);
  mess.insert(mess.size(), cp+7);
  print(mess);

  string s("some string"), s2("some other string");
  cout << s.size() << endl; 
  s.insert(0, s2);
  print(s);
  s.insert(0, s2, 0, s2.size());
  print(s);
  
  string s3("C++ Primer"), s4 = s3;
  s3.insert(s3.size(), " 4th Ed.");
  s4.append(" 4th Ed.");
  print(s3);
  print(s4);

  s3.erase(11, 3);
  s3.insert(11, "5th");
  print(s3);
  s4.replace(11, 3, "5th");
  print(s4);

  return 0;
} 
