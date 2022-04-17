#pragma once

class GameObject
{
protected:
	int xpos;
	int ypos;

public:
	GameObject();
	GameObject(int x, int y);
	GameObject(const GameObject& copy);
	virtual ~GameObject();

	GameObject& operator=(const GameObject& ref);
};

