#include "stdafx.h"
#include "PlayScene.h"
#include "UI.h"
#include "TetrisMap.h"
#include "Game.h"
#include "Block.h"
#include "Blocks.h"

void PlayScene::UpdateScene()
{
	end = clock();
	ftime = ((float)(end - start) / CLOCKS_PER_SEC);
	if (ftime >= 1.5)
	{
		if (nullptr != blockObject)
		{
			// ������ ƽ���� �����;���
			blockObject->MoveDown();
			blockObject->Render(tMap, blockObject->getXpos(), blockObject->getYpos());
			tMap->DrawMap();
		}
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

	// ���� �Է��ϴ°� ó��
	CheckKeyInput();
	
	// �� ���� �浹ó��
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
	int select = rand() % 7;

	if (select == 0) blockObject = new Block_I();
	else if (select == 1) blockObject = new Block_J();
	else if (select == 2) blockObject = new Block_L();
	else if (select == 3) blockObject = new Block_O();
	else if (select == 4) blockObject = new Block_S();
	else if (select == 5) blockObject = new Block_T();
	else if (select == 6) blockObject = new Block_Z();
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

void PlayScene::CheckKeyInput()
{
	Block collisionCheckBlock = *blockObject;
	
	// Ű �Է�
	if (GetButtonDown(EKeyCode::KEYCODE_A))
	{
		collisionCheckBlock.MoveLeft();
		if(collisionCheckBlock.CheckCollision(tMap, collisionCheckBlock.getXpos(), collisionCheckBlock.getYpos()))
			blockObject->MoveLeft();
	}
	else if (GetButtonDown(EKeyCode::KEYCODE_D))
	{
		collisionCheckBlock.MoveRight();
		if (collisionCheckBlock.CheckCollision(tMap, collisionCheckBlock.getXpos(), collisionCheckBlock.getYpos()))
			blockObject->MoveRight();
	}
	else if (GetButtonDown(EKeyCode::KEYCODE_R))
	{
		collisionCheckBlock.Rotate();
		if (collisionCheckBlock.CheckCollision(tMap, collisionCheckBlock.getXpos(), collisionCheckBlock.getYpos()))
			blockObject->Rotate();
	}

	// Check Collision
	blockObject->Render(tMap, blockObject->getXpos(), blockObject->getYpos());
	tMap->DrawMap();
}
