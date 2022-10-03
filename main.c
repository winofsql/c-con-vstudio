#include <windows.h>
#include <stdio.h>

int main(void)
{
    printf("Hello, World");
    OutputDebugString(L"Hello, World\n");
    return 0;
}