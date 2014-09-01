#include "Window_mgr.h"
#include "Screen.h"
using namespace std;

int main(){
    Window_mgr mgr;
    Window_mgr::ScreenIndex index = 0;
    mgr.get(index).set(0,1,'A').display(cout);
    cout << "========  after  ==============" << endl;
    mgr.clear(index);
    mgr.get(index).display(cout);
    return 0;
}