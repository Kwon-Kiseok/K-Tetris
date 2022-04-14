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
    std::cout << "Init Game" << std::endl;
}

void Game::update()
{
    std::cout << "Update Game" << std::endl;

    int input = 0;
    std::cin >> input;
    if (input == 0)
        bRunning = false;
    
}

void Game::render()
{
    std::cout << "Render Game" << std::endl;
}

void Game::clean()
{
    std::cout << "Cleaning Game" << std::endl;
    this->DestroyInstance();
}

bool Game::CheckGameRunning()
{
    return bRunning;
}
