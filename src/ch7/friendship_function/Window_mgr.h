#ifndef _WINDOW_MGR_H
#define _WINDOW_MGR_H
#include <vector>
using namespace std;

class Screen;
class Window_mgr{
public:
    using ScreenIndex = std::vector<Screen>::size_type;
    void clear(ScreenIndex);
    Screen &get(ScreenIndex i){return screens[i];}
    Window_mgr();
private:
    std::vector<Screen> screens;
};

#endif // _WINDOW_MGR_H
