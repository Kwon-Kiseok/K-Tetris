#pragma once
#include "stdafx.h"

enum class TEXT_COLOR
{
	BLACK,
	BLUE,
	GREEN,
	CYAN,
	RED,
	MAGENTA,
	BROWN,
	LIGHTGRAY,
	DARKGRAY,
	LIGHTBLUE,
	LIGHTGREEN,
	LIGHTCYAN,
	LIGHTRED,
	LIGHTMAGENTA,
	YELLOW,
	WHITE
};

void TextColor(int foreground, int background);
void SetUI();
void gotoXY(int x, int y);
void CursorView();
