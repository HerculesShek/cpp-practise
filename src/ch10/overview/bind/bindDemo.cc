#include <iostream>
#include <functional>
#include <vector>
#include <algorithm>

using namespace std;
using namespace placeholders;

bool check_size(int i, int limit)
{
  return i >= limit;
}

auto check6 = bind(check_size, _1, 6);

int main(){
    vector<int> nums {4,7,8,12,-6,78};
    sort(nums.begin(), nums.end());
    auto itr_res = find_if(nums.begin(), nums.end(), check6);
    cout << *itr_res << endl;
    vector<int>::difference_type diff = nums.end() - itr_res;
    cout << diff << endl;
    return 0;
}
