#include "stdafx.h"
#include "Color.h"

void SetColor(OBJECT_COLOR foreground, OBJECT_COLOR background)
{
	int color = static_cast<int>(foreground) + static_cast<int>(background) * 16;
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), color);
}