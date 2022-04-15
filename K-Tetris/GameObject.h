#pragma once

class GameObject
{
private:
	int xpos;
	int ypos;

public:
	GameObject();
	GameObject(int x, int y);
	GameObject(const GameObject& copy);
	virtual ~GameObject();

	GameObject& operator=(const GameObject& ref);
};

