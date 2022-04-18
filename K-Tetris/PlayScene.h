#pragma once
#include "Scene.h"
#include "Block.h"

class PlayScene : public Scene
{
private:
	Block* blockObject;
	TetrisMap* tMap = new TetrisMap;

	int timer = 0;
	clock_t start, end;
	float ftime;
public:
	PlayScene() : blockObject(nullptr), start(clock()) {}
	~PlayScene() { delete blockObject; blockObject = nullptr; }
	virtual void UpdateScene();
	virtual void DrawScene();

	void BuildBlock();
	void CreateBlock();
	void DeleteBlock();
	void CheckGameEnd();
	void ShowNextBlock();
	void CheckKeyInput();
};

