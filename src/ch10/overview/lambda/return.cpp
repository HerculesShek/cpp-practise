#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

int main()
{
    vector<int> nums{-1,2,-3,4,-5,6,-7,8};
    // transform(nums.begin(), nums.end(), nums.begin(),[](int n){return n<0 ? -n : n;});
    transform(nums.begin(), nums.end(), nums.begin(),
        [](int n) ->int {if (n<0) return -n; else return n;});

    for_each(nums.begin(), nums.end(), [](int i){cout << i << endl;});
    return 0;
}
