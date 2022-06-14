#include "console.h"
#include<fcntl.h>
#include<io.h>
#include<Windows.h>
void Title()
{
	SetConsoleTitle(L"Survive on a desert island");
	system("mode con: cols=200 lines=40");
}


	