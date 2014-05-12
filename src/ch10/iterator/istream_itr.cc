#include <iostream>
#include <iterator>
#include <vector>
#include <numeric>
using namespace std;

int main()
{
  vector<int> vs;
  istream_iterator<int> in_iter(cin), eof;
  while(in_iter != eof)
	vs.push_back(*in_iter++);
  
  ostream_iterator<int> out_itr(cout, " ");
  for(auto e : vs)
	out_itr = e;
  cout << endl;


  return 0;
}
