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
	gotoXY(55, 2); cout << "123";
}

void DrawManualUI()
{
	gotoXY(4, 25); cout << "Manual";

	gotoXY(4, 27); std::wcout << L"← : A";
	gotoXY(4, 28); std::wcout << L"→ : D";
	gotoXY(4, 29); std::wcout << L"↓ : S";
	gotoXY(14, 27); cout << "Rotation : R";
	gotoXY(14, 28); cout << "Exit : ESC";
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