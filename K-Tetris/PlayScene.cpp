#include "stdafx.h"
#include "PlayScene.h"
#include "UI.h"
#include "TetrisMap.h"
#include "Game.h"
#include "Block.h"
#include "Block_I.h"
#include "Block_J.h"
#include "Block_L.h"

void PlayScene::UpdateScene()
{
	end = clock();
	ftime = ((float)(end - start) / CLOCKS_PER_SEC);
	if (ftime >= 1.5)
	{
		blockObject->MoveDown();
		blockObject->Render(tMap, blockObject->getXpos(), blockObject->getYpos());
		tMap->DrawMap();
		start = clock();
	}
	// input
	// 게임 종료
	CheckGameEnd();

	if (GetButtonDown(EKeyCode::KEYCODE_ENTER))
		DeleteBlock();
	// 현재 컨트롤 중인 블럭이 없다면
	// 컨트롤할 블럭이 랜덤 생성 및 배정
	if (nullptr == blockObject)
		CreateBlock();
	// 블럭들이 틱마다 내려와야함
	if (GetButtonDown(EKeyCode::KEYCODE_A))
	{
		blockObject->MoveLeft();
		blockObject->Render(tMap, blockObject->getXpos(), blockObject->getYpos());
		tMap->DrawMap();
	}
	if (GetButtonDown(EKeyCode::KEYCODE_D))
	{
		blockObject->MoveRight();
		blockObject->Render(tMap, blockObject->getXpos(), blockObject->getYpos());
		tMap->DrawMap();
	}
	
	// 내가 입력하는거 처리
	// 블럭이 바닥에 다다랐을 때 체크해야함
	// -> 매 프레임 맵 배열을 전체 체크하면서
	// -> 블럭들이 채워졌다면 해당 행 지워주고 내려주는 식으로
	tMap->DrawMap();
}

void PlayScene::DrawScene()
{
	tMap->InitMap();
	tMap->DrawMap();
	DrawScoreBoardUI();
}

void PlayScene::CreateBlock()
{
	srand((unsigned int)time(NULL));
	int select = rand() % 3;

	if (select == 0) blockObject = new Block_I();
	else if (select == 1) blockObject = new Block_J();
	else if (select == 2) blockObject = new Block_L();
	ShowNextBlock();

	// 맵 중앙에 나오도록
	blockObject->setXpos(5);
	blockObject->setYpos(0);
}

void PlayScene::DeleteBlock()
{
	if (nullptr == blockObject)
	{
		return;
	}

	delete blockObject;
	blockObject = nullptr;
}

void PlayScene::CheckGameEnd()
{
	if (GetButtonDown(EKeyCode::KEYCODE_ESC))
	{
		Game::GetInstance()->SetGameRunning();
	}
}

void PlayScene::ShowNextBlock()
{
	int xpos = 4; int ypos = 3;
	gotoXY(xpos, ypos);
	Block ShowBlock = *blockObject;
	ShowBlock.Render(nullptr,xpos, ypos);
}