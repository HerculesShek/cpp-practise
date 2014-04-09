#include <iostream>
#include <vector>

using namespace std;

int main()
{
  vector<int> vi(30);
  vector<int>::size_type cnt = vi.size();

  for(auto i = 0; i!=vi.size(); ++i, cnt--)
	vi[i] = cnt;

  for(int a : vi)
	cout << a << " ";
  cout << endl;


  return 0;
}
