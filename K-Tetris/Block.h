#pragma once
#include "GameObject.h"

enum class BLOCK_TYPE
{
	DEFALUT = 0,
	BLOCK_I,	
	BLOCK_J,		
	BLOCK_L,
	BLOCK_O,	
	BLOCK_S,
	BLOCK_T,
	BLOCK_Z
};

class Block : public GameObject
{
private:
	BLOCK_TYPE type;
	OBJECT_COLOR color;
public:
	Block();
	Block(int x, int y, BLOCK_TYPE type, OBJECT_COLOR color);
	Block(const Block& copy);
	~Block();
};

