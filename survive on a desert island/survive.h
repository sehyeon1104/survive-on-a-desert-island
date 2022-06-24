#pragma once
#include <conio.h>	
#include <Windows.h>
#include <iostream>
#include <io.h>
#include <fcntl.h>
#include <string>
#include <vector>	
#include <map>  
#include <time.h>   	
#include <mmsystem.h>
#include <Digitalv.h>

enum {
    BLACK,
    DARK_BLUE,
    DARK_GREEN,
    DARK_SKYBLUE,
    DARK_RED,
    DARK_VOILET,
    DAKR_YELLOW,
    GRAY,
    DARK_GRAY,
    BLUE,
    GREEN,
    SKYBLUE,
    RED,
    VIOLET,
    YELLOW,
    WHITE,
};

static int hp = 0;
using namespace std;
void DSituation();
void Die();
void easynormalhard();
void Escape();
void textcolor(int foreground, int background);
void Randomtlqkf();
void Issick();
void LastSituation();
void Randomelse();
void MainScreen();
void Startprint();
void Story();
void Playingbgm();
void Setting();
void ASituation();
void BSituation();
void CSituation();
void ItemSet();
void SelectItem();
void Stringtochar(int a, string d);
BOOL FindItem(string items);

#pragma once
