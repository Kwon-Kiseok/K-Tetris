#include "stdafx.h"
#include "TetrisMap.h"
#include "UI.h"
#include <locale.h>

void TetrisMap::InitMap()
{
	setlocale(LC_ALL, "ko_KR.utf8");

	for (int i = 0; i < MAX_ROW+2; ++i)
	{
		for (int j = 0; j < MAX_COL + 2; ++j)
		{
			if (i == MAX_ROW + 1)
			{
				map[i][j] = L'¢Ì';
			}
			else
			{
				if (j == 0 || j == MAX_COL + 1)
					map[i][j] = L'¢Ì';
				else
					map[i][j] = L' ';
			}

		}
	}
}

void TetrisMap::DrawMap()
{
	xpos = 20;
	ypos = 1;
	gotoXY(xpos, ypos);

	for (int i = 0; i < MAX_ROW + 2; ++i)
	{
		for (int j = 0; j < MAX_COL + 2; ++j)
		{
			std::wcout << map[i][j];
			xpos+=2;
			gotoXY(xpos, ypos);
		}
		xpos = 20;
		ypos++;
		gotoXY(xpos, ypos);
	}
}
