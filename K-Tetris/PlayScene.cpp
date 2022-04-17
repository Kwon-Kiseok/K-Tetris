#include "stdafx.h"
#include "PlayScene.h"
#include "UI.h"
#include "TetrisMap.h"
#include "Game.h"

void PlayScene::UpdateScene()
{
	// input
	// 게임 종료
	CheckGameEnd();

	// 현재 컨트롤 중인 블럭이 없다면
	// 컨트롤할 블럭이 랜덤 생성 및 배정
	
	// 블럭들이 틱마다 내려와야함

	// 내가 입력하는거 처리

	// 블럭이 바닥에 다다랐을 때 체크해야함
	// -> 매 프레임 맵 배열을 전체 체크하면서
	// -> 블럭들이 채워졌다면 해당 행 지워주고 내려주는 식으로
	
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
