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

    SceneManager::GetInstance()->LoadScene(0);
}

void Game::update()
{
    UpdateInput();

}

void Game::render()
{
}

void Game::handleEvents()
{
}

void Game::clean()
{
    SetColor(OBJECT_COLOR::DARKGRAY, OBJECT_COLOR::WHITE);
    std::cout << "Cleaning Game" << std::endl;
    this->DestroyInstance();
    SceneManager::DestroyInstance();
}

bool Game::CheckGameRunning()
{
    return bRunning;
}
