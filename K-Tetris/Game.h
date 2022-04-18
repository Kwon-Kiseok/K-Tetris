#pragma once

class Game
{
private:
	Game() : bRunning(true), bPlaying(false), score(0) {}
	~Game() {}

	static Game* instance;

	bool bRunning;
	bool bPlaying;
	int score;
public:
	static Game* GetInstance();
	static void DestroyInstance();

	void init();	// ���� ���� �ʱ�ȭ
	void update();	// �������� ������Ʈ
	void render();	// ����ȭ�� ����
	void handleEvents();
	void clean();	// ���� �� ���� �ʱ�ȭ
	bool CheckGameRunning();	// ���� ���� üũ
	void SetGameRunning();

	int getScore();
	void setScore(int value);
};
