#pragma once
#include "Scene.h"

class MenuScene : public Scene
{
public:
	MenuScene() {}
	~MenuScene() {}
	virtual void UpdateScene();
	virtual void DrawScene();
};

