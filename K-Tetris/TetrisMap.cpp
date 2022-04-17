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
				map[i][j] = 2;
			}
			else
			{
				if (j == 0 || j == MAX_COL + 1)
					map[i][j] = 2;
				else
					map[i][j] = 0;
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
			if (map[i][j] == 2)
				std::wcout << L"в╠";
			else if (map[i][j] == 1)
				std::wcout << L"бс";
			else
				std::cout << "  ";
			xpos+=2;
			gotoXY(xpos, ypos);
		}
		xpos = 20;
		ypos++;
		gotoXY(xpos, ypos);
	}
}

int TetrisMap::setMap(int xpos, int ypos, int symbol)
{
	return map[ypos][xpos] = symbol;
}

int TetrisMap::getMap(int xpos, int ypos)
{
	return map[ypos][xpos];
}
