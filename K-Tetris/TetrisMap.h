#pragma once
#include "GameObject.h"

#define MAX_COL 10
#define MAX_ROW 20

class TetrisMap : public GameObject
{
private:
	int map[MAX_ROW+2][MAX_COL+2];

public:
	TetrisMap() : map() {}
	~TetrisMap() {}

	void InitMap();
	void DrawMap();
	void DeleteLinear();
	bool CheckFullStack();
	int setMap(int xpos, int ypos, int symbol);
	int getMap(int xpos, int ypos);
};

