#include <vector>
#include <iostream>
#include <string>
using namespace std;

int main(){
    vector<int> nums;
    auto max = nums.max_size();
    cout << max << endl;

    vector<int> b(10);
    for(auto a : b){
        cout << a << endl;
    }

    vector<string*> names;
  
    string name1("Tom"), name2("Jack");
    names.push_back(&name1);
    names.push_back(&name2);

    name1[0] = 'A';
    cout << *names[0] << endl;

    return 0;
}