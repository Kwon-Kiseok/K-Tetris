#pragma once

class Game
{
private:
	Game() : bRunning(true), bPlaying(false) {};
	~Game() {};

	static Game* instance;

	bool bRunning;
	bool bPlaying;
public:
	static Game* GetInstance();
	static void DestroyInstance();

	void init();	// 게임 정보 초기화
	void update();	// 게임정보 업데이트
	void render();	// 게임화면 렌더
	void handleEvents();
	void clean();	// 종료 전 정보 초기화
	bool CheckGameRunning();	// 게임 종료 체크
};
