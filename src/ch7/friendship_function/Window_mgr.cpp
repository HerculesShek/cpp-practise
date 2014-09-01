#include "Window_mgr.h"
#include "Screen.h"
using namespace std;

void Window_mgr::clear(ScreenIndex i){
    Screen &s = screens[i];
    s.contents = string(s.height*s.width, '#');
}

Window_mgr::Window_mgr(){
    screens.push_back(Screen(3,3,'a'));
}