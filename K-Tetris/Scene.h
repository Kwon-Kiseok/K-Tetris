#pragma once

class Scene
{
public:
	virtual ~Scene() {}
	virtual void UpdateScene() = 0;
	virtual void DrawScene() = 0;
};

