#include "stdafx.h"
#include "TetrisMap.h"
#include "UI.h"
#include <locale.h>
#include "Game.h"

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
				std::wcout << L"▩";
			else if (map[i][j] == 1 || map[i][j] == 3)
				std::wcout << L"■";
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

void TetrisMap::DeleteLinear()
{
	for (int i = MAX_ROW; i >= 0; i--)
	{
		bool isLinear = true;
		for (int j = 1; j < MAX_COL + 1; ++j)
		{
			if (map[i][j] != 3) 
				isLinear = false;
		}
		// 라인이 전부 찼다면 지워주기
		if (isLinear)
		{
			for (int y = i; y >= 0; y--)
			{
				for (int x = 1; x < MAX_COL + 1; ++x)
				{
					map[y][x] = map[y - 1][x];
				}
			}
			AddScore();
		}
	}
}

bool TetrisMap::CheckFullStack()
{
	for (int i = 1; i < MAX_COL + 1; ++i)
	{
		if (map[2][i] == 3)
		{
			return true;
		}
	}
	return false;
}

int TetrisMap::setMap(int xpos, int ypos, int symbol)
{
	return map[ypos][xpos] = symbol;
}

int TetrisMap::getMap(int xpos, int ypos)
{
	return map[ypos][xpos];
}
