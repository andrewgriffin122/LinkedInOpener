#include <Windows.h>
#include <iostream>
#include <shellapi.h>
#include <cstdlib>
#include <ctime>

//https://learn.microsoft.com/en-us/windows/win32/api/winuser/nf-winuser-keybd_event
//https://learn.microsoft.com/en-us/windows/win32/inputdev/virtual-key-codes

const char* websites[4] = {
    "https://www.linkedin.com/in/scbarrett/",
    "https://www.farmersonly.com/",
    "https://www.twitch.tv/moistcr1tikal",
    "https://www.youtube.com/watch?v=lYBUbBu4W08"
};
int main() 
{
    srand(static_cast<unsigned int>(time(0)));
    while (true)
    {
        //Press A
        if (GetAsyncKeyState(0x41))
        {
            ShellExecuteA(0, 0, websites[rand() % 4], 0, 0, SW_SHOW);
            //std::cout << "Key Pressed\n";
            Sleep(1000);
            //system("CLS");
            //keybd_event(VK_LSHIFT, 0, 0, 0);
            //keybd_event(VK_CONTROL, 0, 0, 0);
            //keybd_event(VK_LWIN, 0, 0, 0);
            //keybd_event(VK_LMENU, 0, 0, 0);
            //keybd_event(0x4C, 0, 0, 0);
            ////Sleep(1);
            //keybd_event(0x4C, 0, KEYEVENTF_KEYUP, 0);
            //keybd_event(VK_LMENU, 0, KEYEVENTF_KEYUP, 0);
            //keybd_event(VK_LWIN, 0, KEYEVENTF_KEYUP, 0);
            //keybd_event(VK_CONTROL, 0, KEYEVENTF_KEYUP, 0);
            //keybd_event(VK_LSHIFT, 0, KEYEVENTF_KEYUP, 0);
            //Sleep(5000);
        }

    }
    return 0;
}
