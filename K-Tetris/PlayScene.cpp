#include "stdafx.h"
#include "PlayScene.h"
#include "UI.h"
#include "TetrisMap.h"
#include "Game.h"

void PlayScene::UpdateScene()
{
	// input
	// ���� ����
	CheckGameEnd();

	// ���� ��Ʈ�� ���� ���� ���ٸ�
	// ��Ʈ���� ���� ���� ���� �� ����
	
	// ������ ƽ���� �����;���

	// ���� �Է��ϴ°� ó��

	// ���� �ٴڿ� �ٴٶ��� �� üũ�ؾ���
	// -> �� ������ �� �迭�� ��ü üũ�ϸ鼭
	// -> ������ ä�����ٸ� �ش� �� �����ְ� �����ִ� ������
	
}

void PlayScene::DrawScene()
{
	TetrisMap tMap;
	tMap.InitMap();
	tMap.DrawMap();
	DrawScoreBoardUI();
}

void PlayScene::CheckGameEnd()
{
	if (GetButtonDown(EKeyCode::KEYCODE_ESC))
	{
		Game::GetInstance()->SetGameRunning();
	}
}
