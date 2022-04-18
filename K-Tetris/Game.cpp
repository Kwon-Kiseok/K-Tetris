#include "stdafx.h"
#include "Game.h"
#include "UI.h"
#include "SceneManager.h"

Game* Game::instance = nullptr;

Game* Game::GetInstance()
{
    if (nullptr == instance)
    {
        instance = new Game();
    }
    return instance;
}

void Game::DestroyInstance()
{
    if (!instance)
    {
        return;
    }
    delete instance;
    instance = nullptr;
}

void Game::init()
{
    system(" mode con lines=36 cols=64");   // set console size
    SetConsoleTitle(L"K-Tetris");           // set console title

    CursorView();

    SceneManager::GetInstance()->LoadScene(SCENE_TYPE::MENU_SCENE);
}

void Game::update()
{
    UpdateInput();
    SceneManager::GetInstance()->pScene->UpdateScene();
}

void Game::render()
{
}

void Game::handleEvents()
{
}

void Game::clean()
{
    gotoXY(28, 30);
    std::cout << "Game Over" << std::endl;
    this->DestroyInstance();
    SceneManager::DestroyInstance();
}

bool Game::CheckGameRunning()
{
    return bRunning;
}

void Game::SetGameRunning()
{
    bRunning = !bRunning;
}

int Game::getScore()
{
    return score;
}

void Game::setScore(int value)
{
    score += value;
}
