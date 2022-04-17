#include "stdafx.h"
#include "SceneManager.h"
#include "MenuScene.h"
#include "UI.h"

using std::cout;

void MenuScene::UpdateScene()
{
	// "PRESS ANY KEY TO START" Fliker
	if (GetButtonDown(EKeyCode::KEYCODE_ENTER))
	{
		SceneManager::GetInstance()->LoadScene(SCENE_TYPE::PLAYING_SCENE);
	}
}

void MenuScene::DrawScene()
{
	SetColor(OBJECT_COLOR::YELLOW, OBJECT_COLOR::BLACK);
	gotoXY(31, 0); cout << "≠";
	gotoXY(31, 1); cout << "﹥";
	gotoXY(29, 2); cout << "﹥﹥﹥";
	gotoXY(30, 3); cout << "﹥﹥";
	SetColor(OBJECT_COLOR::RED, OBJECT_COLOR::BLACK);
	gotoXY(31, 4); cout << "﹥";
	gotoXY(30, 5); cout << "﹥﹥";
	gotoXY(29, 6); cout << "﹥﹥﹥";
	gotoXY(28, 7); cout << "﹥﹥﹥﹥";
	gotoXY(27, 8); cout << "﹥﹥﹥﹥﹥";
	SetColor(OBJECT_COLOR::BLUE, OBJECT_COLOR::BLACK);
	gotoXY(26, 9); cout << "﹥﹥﹥﹥﹥﹥";

	SetColor(OBJECT_COLOR::YELLOW, OBJECT_COLOR::BLACK);
	gotoXY(15, 7); cout << "﹦";
	gotoXY(15, 8); cout << "﹥";
	gotoXY(13, 9); cout << "﹥﹥﹥";
	gotoXY(14, 10); cout << "﹥﹥";

	SetColor(OBJECT_COLOR::BLUE, OBJECT_COLOR::BLACK);
	gotoXY(15, 11); cout << "﹥";
	gotoXY(14, 12); cout << "﹥﹥";
	gotoXY(13, 13); cout << "﹥﹥﹥";
	gotoXY(12, 14); cout << "﹥﹥﹥﹥";

	SetColor(OBJECT_COLOR::YELLOW, OBJECT_COLOR::BLACK);
	gotoXY(47, 7); cout << "﹦";
	gotoXY(47, 8); cout << "﹥";
	gotoXY(45, 9); cout << "﹥﹥﹥";
	gotoXY(46, 10); cout << "﹥﹥";

	SetColor(OBJECT_COLOR::BLUE, OBJECT_COLOR::BLACK);
	gotoXY(47, 11); cout << "﹥";
	gotoXY(46, 12); cout << "﹥﹥";
	gotoXY(45, 13); cout << "﹥﹥﹥";
	gotoXY(44, 14); cout << "﹥﹥﹥﹥";

	SetColor(OBJECT_COLOR::RED, OBJECT_COLOR::BLACK);
	gotoXY(26, 10); cout << "﹥〡﹥﹥〡﹥";
	gotoXY(26, 11); cout << "﹥〡﹥﹥〡﹥";
	gotoXY(25, 12); cout << "﹥〡〡﹥〡〡﹥";
	gotoXY(25, 13); cout << "﹥〡〡﹥〡〡﹥";
	gotoXY(25, 14); cout << "〡〡〡〡〡〡〡";
	SetColor(OBJECT_COLOR::BLUE, OBJECT_COLOR::BLACK);
	gotoXY(11, 15); cout << "﹥﹥﹥﹥﹥﹥﹥﹥﹥﹥﹥﹥﹥﹥﹥﹥﹥﹥﹥﹥﹥";
	SetColor(OBJECT_COLOR::CYAN, OBJECT_COLOR::BLACK);
	gotoXY(11, 16); cout << "﹥旨收旬 ﹥﹥旨收旬 ﹥﹥旨收有收旬 ﹥﹥旨收旬 ﹥﹥旨收旬 ﹥";
	gotoXY(11, 17); cout << "﹥早 早 ﹥﹥早 早 ﹥﹥早 早 早 ﹥﹥早 早 ﹥﹥早 早 ﹥";
	gotoXY(11, 18); cout << "﹥早 早 ﹥﹥早 早 ﹥﹥早 早 早 ﹥﹥早 早 ﹥﹥早 早 ﹥";
	gotoXY(11, 19); cout << "﹥曲收旭 ﹥﹥曲收旭 ﹥﹥曲收朴收旭 ﹥﹥曲收旭 ﹥﹥曲收旭 ﹥";
	SetColor(OBJECT_COLOR::BLUE, OBJECT_COLOR::BLACK);
	gotoXY(7, 20); cout << "﹥﹥﹥﹥﹥﹥﹥﹥﹥﹥﹥﹥﹥﹥﹥﹥﹥﹥﹥﹥﹥﹥﹥﹥﹥";
	SetColor(OBJECT_COLOR::LIGHTMAGENTA, OBJECT_COLOR::BLACK);
	gotoXY(7, 21); cout << "﹥〥﹥〥﹥〥﹥〥﹥〥﹥〥﹥〥﹥〥﹥〥﹥〥﹥〥﹥〥﹥";
	SetColor(OBJECT_COLOR::RED, OBJECT_COLOR::BLACK);
	gotoXY(7, 22); cout << "﹥﹥﹥﹥﹥﹥﹥﹥﹥﹥﹥﹥﹥﹥﹥﹥﹥﹥﹥﹥﹥﹥﹥﹥﹥";
	gotoXY(7, 23); cout << "﹥﹥﹥﹥﹥﹥﹥﹥﹥﹥﹥﹥﹥﹥﹥﹥﹥﹥﹥﹥﹥﹥﹥﹥﹥";

	SetColor(OBJECT_COLOR::YELLOW, OBJECT_COLOR::BLACK);
	// T
	gotoXY(6, 25); cout << "﹥﹥﹥﹥﹥";
	gotoXY(10, 26); cout << "﹥";
	gotoXY(10, 27); cout << "﹥";
	gotoXY(10, 28); cout << "﹥";
	gotoXY(10, 29); cout << "﹥";

	// E
	gotoXY(17, 25); cout << "﹥﹥﹥";
	gotoXY(17, 26); cout << "﹥";
	gotoXY(17, 27); cout << "﹥﹥﹥";
	gotoXY(17, 28); cout << "﹥";
	gotoXY(17, 29); cout << "﹥﹥﹥";

	// T
	gotoXY(24, 25); cout << "﹥﹥﹥﹥﹥";
	gotoXY(28, 26); cout << "﹥";
	gotoXY(28, 27); cout << "﹥";
	gotoXY(28, 28); cout << "﹥";
	gotoXY(28, 29); cout << "﹥";

	// R
	gotoXY(35, 25); cout << " ﹥﹥﹥";
	gotoXY(35, 26); cout << "﹥   ﹥";
	gotoXY(35, 27); cout << " ﹥﹥﹥";
	gotoXY(35, 28); cout << "  ﹥ ﹥";
	gotoXY(35, 29); cout << "﹥   ﹥";

	// I
	gotoXY(44, 25); cout << "﹥﹥﹥";
	gotoXY(46, 26); cout << "﹥";
	gotoXY(46, 27); cout << "﹥";
	gotoXY(46, 28); cout << "﹥";
	gotoXY(44, 29); cout << "﹥﹥﹥";

	// S
	gotoXY(52, 25); cout << "﹥﹥﹥";
	gotoXY(52, 26); cout << "﹥";
	gotoXY(52, 27); cout << "﹥﹥﹥";
	gotoXY(52, 28); cout << "    ﹥";
	gotoXY(52, 29); cout << "﹥﹥﹥";

	gotoXY(20, 32); cout << "PRESS ENTER KEY TO START";

	// Copyright
	gotoXY(23, 35); cout << "使 2022 KWON KISEOK";
}
