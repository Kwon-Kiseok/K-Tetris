#include "stdafx.h"
#include "SceneManager.h"
#include "MenuScene.h"

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

void SceneManager::LoadScene(int scene)
{
    sceneNumber = scene;
    ClearScene();
    switch (sceneNumber)
    {
    case 0:
    {
        MenuScene menuScene;
        menuScene.DrawScene();
    }
        break;
    case 1:
        break;
    }

    


}

void SceneManager::ClearScene()
{
    system("cls");
}
