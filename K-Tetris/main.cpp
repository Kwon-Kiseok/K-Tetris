#include "stdafx.h"
#include "Game.h"

int main()
{
	Game* game = Game::GetInstance();

	game->init();

	while (game->CheckGameRunning())
	{
		game->update();
		game->render();
	}

	game->clean();
	
	return 0;
}