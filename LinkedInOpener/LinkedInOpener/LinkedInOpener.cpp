#include <Windows.h>
#include <iostream>

//https://learn.microsoft.com/en-us/windows/win32/api/winuser/nf-winuser-keybd_event
//https://learn.microsoft.com/en-us/windows/win32/inputdev/virtual-key-codes
int main() {
    while (true)
    {
        //Press A
        if (GetAsyncKeyState(0x41))
        {
            std::cout << "Key Pressed\n";
            Sleep(10);
            system("CLS");
            keybd_event(VK_LSHIFT, 0, 0, 0);
            keybd_event(VK_CONTROL, 0, 0, 0);
            keybd_event(VK_LWIN, 0, 0, 0);
            keybd_event(VK_LMENU, 0, 0, 0);
            keybd_event(0x4C, 0, 0, 0);
            //Sleep(1);
            keybd_event(0x4C, 0, KEYEVENTF_KEYUP, 0);
            keybd_event(VK_LMENU, 0, KEYEVENTF_KEYUP, 0);
            keybd_event(VK_LWIN, 0, KEYEVENTF_KEYUP, 0);
            keybd_event(VK_CONTROL, 0, KEYEVENTF_KEYUP, 0);
            keybd_event(VK_LSHIFT, 0, KEYEVENTF_KEYUP, 0);
            Sleep(5000);
        }

    }
    return 0;
}
