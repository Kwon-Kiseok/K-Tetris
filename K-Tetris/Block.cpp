#include "stdafx.h"
#include "Block.h"

Block::Block() : type(BLOCK_TYPE::DEFALUT), color(OBJECT_COLOR::WHITE)
{}

Block::Block(int x, int y, BLOCK_TYPE type, OBJECT_COLOR color) : GameObject(x,y), type(type), color(color)
{
}

Block::Block(const Block& copy) : GameObject(copy), type(copy.type), color(copy.color)
{
}

Block::~Block()
{}
