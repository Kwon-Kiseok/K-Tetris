#pragma once
#include "Scene.h"

enum class SCENE_TYPE
{
	MENU_SCENE = 0,
	PLAYING_SCENE
};

class SceneManager
{
private:
	SceneManager() : sceneType(SCENE_TYPE::MENU_SCENE), pScene(nullptr) {}
	~SceneManager() { delete pScene; }

	static SceneManager* instance;

	SCENE_TYPE sceneType;
public:
	Scene* pScene;

	static SceneManager* GetInstance();
	static void DestroyInstance();

	void LoadScene(SCENE_TYPE type);
	void ClearScene();
};

