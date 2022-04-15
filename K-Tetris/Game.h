#pragma once

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
	void handleEvents();
	void clean();	// ���� �� ���� �ʱ�ȭ
	bool CheckGameRunning();	// ���� ���� üũ
};
