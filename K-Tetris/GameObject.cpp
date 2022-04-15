#include "stdafx.h"
#include "GameObject.h"

GameObject::GameObject() : xpos(0), ypos(0)
{}
GameObject::~GameObject()
{}

GameObject::GameObject(int x, int y) : xpos(x), ypos(y)
{
}

GameObject::GameObject(const GameObject& copy) : xpos(copy.xpos), ypos(copy.ypos)
{
}

GameObject& GameObject::operator=(const GameObject& ref)
{
	return *this;
}

