#include "stdafx.h"
#include "UI.h"

using std::cout;

void TextColor(int foreground, int background)
{
	int color = foreground + background * 16;
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), color);
}

void SetUI()
{
	// 36 * 64

	gotoXY(4, 1); cout << "NEXT";
	gotoXY(55, 1); cout << "SCORE";
	gotoXY(55, 8); cout << "LINES";
	gotoXY(55, 15); cout << "LEVLE";
}

void gotoXY(int x, int y)
{
	COORD pos = { x, y };
	SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), pos);
}

void CursorView()
{
	CONSOLE_CURSOR_INFO cursorInfo = { 0, };
	cursorInfo.dwSize = 1; // 커서 굵기 ( 1 ~ 100 )
	cursorInfo.bVisible = FALSE; // 커서 보이기
	SetConsoleCursorInfo(GetStdHandle(STD_OUTPUT_HANDLE), &cursorInfo);
}