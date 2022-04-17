#include "stdafx.h"
#include "SceneManager.h"
#include "MenuScene.h"
#include "PlayScene.h"

SceneManager* SceneManager::instance = nullptr;

SceneManager* SceneManager::GetInstance()
{
    if (nullptr == instance)
    {
        instance = new SceneManager();
    }
    return instance;
}

void SceneManager::DestroyInstance()
{
    if (!instance)
    {
        return;
    }
    delete instance;
    instance = nullptr;
}

void SceneManager::LoadScene(SCENE_TYPE type)
{
    sceneType = type;
    ClearScene();

    switch (sceneType)
    {
    case SCENE_TYPE::MENU_SCENE:
    {
        pScene = new MenuScene();
    }
        break;
    case SCENE_TYPE::PLAYING_SCENE:
    {
        pScene = new PlayScene();
    }
        break;
    default:
        break;
    }
    pScene->DrawScene();
}

void SceneManager::ClearScene()
{
    system("cls");

    if (nullptr != pScene)
    {
        delete pScene;
        pScene = nullptr;
    }
}
