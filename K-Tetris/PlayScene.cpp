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
	// ���� ����
	CheckGameEnd();

	if (GetButtonDown(EKeyCode::KEYCODE_ENTER))
		DeleteBlock();
	// ���� ��Ʈ�� ���� ���� ���ٸ�
	// ��Ʈ���� ���� ���� ���� �� ����
	if (nullptr == blockObject)
		CreateBlock();
	// ������ ƽ���� �����;���
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
	
	// ���� �Է��ϴ°� ó��
	// ���� �ٴڿ� �ٴٶ��� �� üũ�ؾ���
	// -> �� ������ �� �迭�� ��ü üũ�ϸ鼭
	// -> ������ ä�����ٸ� �ش� �� �����ְ� �����ִ� ������
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

	// �� �߾ӿ� ��������
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