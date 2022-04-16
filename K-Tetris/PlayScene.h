#pragma once
#include "Scene.h"

class PlayScene : public Scene
{
public:
	PlayScene() {}
	~PlayScene() {}
	virtual void UpdateScene();
	virtual void DrawScene();
};

