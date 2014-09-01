#include "Screen.h"
#include <vector>
using namespace std;
class Window_mgr{
public:
    using ScreenIndex = std::vector<Screen>::size_type;
    void clear(ScreenIndex);
    Screen &get(ScreenIndex i){return screens[i];}
private:
    std::vector<Screen> screens{Screen(24, 80, ' ')};
};

void Window_mgr::clear(ScreenIndex i){
    Screen &s = screens[i];
    s.contents = string(s.height*s.width, '#');
}

int main(){
    Window_mgr mgr;
    Window_mgr::ScreenIndex index = 0;
    mgr.get(index).set(0,1,'A').display(cout);
    cout << "======================================  after  ===================================" << endl;
    mgr.clear(index);
    mgr.get(index).display(cout);
    return 0;
}