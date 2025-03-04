#include <iostream>
#include <cstdlib>
#include <fstream>
#include <windows.h>
using namespace std;

int main()
{
ifstream code("morse.in");
char ch;
    while(code.get(ch))
    {
        if(ch=='.')
        {
            cout<<'O';
            Sleep(200);
            system("CLS");
            Sleep(200);
        }
        if(ch=='-')
        {
            cout<<'O';
            Sleep(600);
            system("CLS");
            Sleep(200);
        }
        if(ch=='/')
        {
            Sleep(400);
        }
    }
    return 0;
}
