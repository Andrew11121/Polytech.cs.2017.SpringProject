#include <stdio.h>
#include <conio.h>
#include <string.h>
#include <stdlib.h>
#include <Windows.h>
#include <time.h>
#include "Tetris.h"



void main(void)
{
	
	printf("%s%s", GAME_TITLE,
		"Press any key to begin...\n");
	_getch(); if (_kbhit()) _getch();

	GameMenu();
}