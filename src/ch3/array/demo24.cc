#include <iostream>
#include <iterator>

using namespace std;

int main(){
    int a[3][4] = {{0},{1},{2}};
    // a[2] = {99}; error! array can't be assigned!
    for(size_t i=0; i != 3; ++i){
        for(size_t j = 0; j != 4; ++j){
            cout << a[i][j] << "\t";
        }
        cout << endl;
    }

    
    return 0;
}
