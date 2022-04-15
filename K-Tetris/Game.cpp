#include "stdafx.h"
#include "Game.h"
#include "UI.h"

Game* Game::instance = nullptr;

Game* Game::GetInstance()
{
    if (!instance)
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

    //SetColor(static_cast<int>(OBJECT_COLOR::RED), static_cast<int>(OBJECT_COLOR::BLACK));
    //std::cout << "Init Game" << std::endl;
    CursorView();
    SetScoreBoardUI();
}

void Game::update()
{
    //SetColor(static_cast<int>(OBJECT_COLOR::CYAN), static_cast<int>(OBJECT_COLOR::BLACK));
    //std::cout << "Update Game" << std::endl;

    int input = 0;
    std::cin >> input;
    if (input == 0)
        bRunning = false;
    
}

void Game::render()
{
    //SetColor(static_cast<int>(OBJECT_COLOR::LIGHTGREEN), static_cast<int>(OBJECT_COLOR::BLACK));
    //std::cout << "Render Game" << std::endl;

    SetScoreBoardUI();
}

void Game::handleEvents()
{
    // 이벤트 타입 별로 받아줌
}

void Game::clean()
{
    SetColor(OBJECT_COLOR::DARKGRAY, OBJECT_COLOR::WHITE);
    std::cout << "Cleaning Game" << std::endl;
    this->DestroyInstance();
}

bool Game::CheckGameRunning()
{
    return bRunning;
}
