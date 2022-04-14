#pragma once
#include "stdafx.h"
#include "UI.h"

class Game
{
private:
	Game() : bRunning(true) {};
	Game(const Game& copy);
	~Game() {};

	static Game* instance;

	bool bRunning;
public:
	static Game* GetInstance();
	static void DestroyInstance();

	void init();	// ���� ���� �ʱ�ȭ
	void update();	// �������� ������Ʈ
	void render();	// ����ȭ�� ����
	void clean();	// ���� �� ���� �ʱ�ȭ
	bool CheckGameRunning();	// ���� ���� üũ
};
