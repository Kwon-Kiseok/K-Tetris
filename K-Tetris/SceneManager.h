#pragma once

class SceneManager
{
private:
	SceneManager() : sceneNumber(0) {}
	~SceneManager() {}

	static SceneManager* instance;

	int sceneNumber;
public:
	static SceneManager* GetInstance();
	static void DestroyInstance();

	void LoadScene(int scene);
	void ClearScene();
};

