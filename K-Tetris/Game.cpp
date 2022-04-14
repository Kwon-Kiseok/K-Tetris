#include "stdafx.h"
#include "Game.h"

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

    //TextColor(static_cast<int>(TEXT_COLOR::RED), static_cast<int>(TEXT_COLOR::BLACK));
    //std::cout << "Init Game" << std::endl;
    CursorView();
    SetUI();
}

void Game::update()
{
    //TextColor(static_cast<int>(TEXT_COLOR::CYAN), static_cast<int>(TEXT_COLOR::BLACK));
    //std::cout << "Update Game" << std::endl;

    int input = 0;
    std::cin >> input;
    if (input == 0)
        bRunning = false;
    
}

void Game::render()
{
    //TextColor(static_cast<int>(TEXT_COLOR::LIGHTGREEN), static_cast<int>(TEXT_COLOR::BLACK));
    //std::cout << "Render Game" << std::endl;

    SetUI();
}

void Game::clean()
{
    TextColor(static_cast<int>(TEXT_COLOR::DARKGRAY), static_cast<int>(TEXT_COLOR::WHITE));
    std::cout << "Cleaning Game" << std::endl;
    this->DestroyInstance();
}

bool Game::CheckGameRunning()
{
    return bRunning;
}
