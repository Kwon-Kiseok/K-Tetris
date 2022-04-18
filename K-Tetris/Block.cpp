#include "stdafx.h"
#include "Block.h"
#include "UI.h"

Block::Block() : rotate_count(0), color(OBJECT_COLOR::WHITE), shape()
{
}

Block::~Block()
{
}

int Block::getShape(int rotate_count, int x, int y)
{
	return shape[rotate_count][y][x];
}

int Block::getRotateCount()
{
	return rotate_count;
}

void Block::Rotate()
{
	rotate_count = (rotate_count + 1) % 4;
}

void Block::MoveDown()
{
	ypos++;
}

void Block::MoveLeft()
{
	xpos--;
}

void Block::MoveRight()
{
	xpos++;
}

void Block::Render(TetrisMap *map, int screen_x, int screen_y)
{
	for (int i = 0; i < MAX_ROW + 1; ++i)
	{
		for (int j = 0; j < MAX_COL + 1; ++j)
		{
			if (map != nullptr)
			{
				//
				if (map->getMap(j, i) == 1)
				{
					map->setMap(j, i, 0);
				}
			}
		}
	}

	int startXpos = screen_x;

	for (int i = 0; i < 4; ++i)
	{
		for (int j = 0; j < 4; ++j)
		{
			if (getShape(rotate_count, j, i) == 1)
			{
				if (map == nullptr)
					std::wcout << L'бс';
				else
					map->setMap(screen_x, screen_y, 1);
			}
			screen_x++;
			gotoXY(screen_x, screen_y);
		}
		screen_x = startXpos;
		screen_y++;
		gotoXY(screen_x, screen_y);
	}
}

bool Block::CheckCollision(TetrisMap* map, int x, int y)
{
	for (int i = 0; i < 4; ++i)
	{
		for (int j = 0; j < 4; ++j)
		{
			int X = j + x;
			int Y = i + y;

			int blockElem = getShape(rotate_count, j, i);

			if (blockElem != 1)
				continue;
			if (map->getMap(X, Y) == 2 || map->getMap(X, Y) == 3)
				return false;
		}
	}
	return true;
}
