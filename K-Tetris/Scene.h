#pragma once

#define MENU_SCENE 0
#define PLAYING_SCENE 1

class Scene
{
public:
	Scene() {}
	virtual ~Scene() {}

	virtual void DrawScene() = 0;
};

