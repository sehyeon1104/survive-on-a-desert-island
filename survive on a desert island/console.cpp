#include "console.h"
#include<fcntl.h>
#include<io.h>
#include<Windows.h>
void Title()
{
	SetConsoleTitle(L"Survive on a desert island");
	system("mode con: cols=200 lines=10");
}
void CurSorhide()
{
	CONSOLE_CURSOR_INFO curinfo;
	curinfo.bVisible = false;
	curinfo.dwSize = 1;
	SetConsoleCursorInfo(GetStdHandle(STD_INPUT_HANDLE), &curinfo);
}

