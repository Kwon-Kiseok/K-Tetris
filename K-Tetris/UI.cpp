#include "stdafx.h"
#include "UI.h"

using std::cout;

void DrawScoreBoardUI()
{
	// 36 * 64

	SetColor(OBJECT_COLOR::MAGENTA, OBJECT_COLOR::BLACK);
	gotoXY(4, 1); cout << "NEXT";
	SetColor(OBJECT_COLOR::GREEN, OBJECT_COLOR::BLACK);
	gotoXY(55, 1); cout << "SCORE";
	SetColor(OBJECT_COLOR::LIGHTBLUE, OBJECT_COLOR::BLACK);
	gotoXY(55, 8); cout << "LINES";
	SetColor(OBJECT_COLOR::LIGHTGRAY, OBJECT_COLOR::BLACK);
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
	cursorInfo.dwSize = 1; // Ŀ�� ���� ( 1 ~ 100 )
	cursorInfo.bVisible = FALSE; // Ŀ�� ���̱�
	SetConsoleCursorInfo(GetStdHandle(STD_OUTPUT_HANDLE), &cursorInfo);
}