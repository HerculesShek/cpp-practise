#include <iostream>
#include <vector>
#include <algorithm>
#include <iterator>

using namespace std;

int main(){
    vector<int> nums;
    auto srt = back_inserter(nums);
    for(int i=1; i<=10; ++i){
        *srt = i;
    }
    nums.erase(nums.begin()+5);
    nums.erase(nums.begin(), nums.end()-2);
    cout << "nums contains:\n\t";
    for(vector<int>::size_type idx = 0;
        idx != nums.size(); ++idx){
        cout << nums[idx] << ", ";
    }
    cout << endl;
    return 0;
}

