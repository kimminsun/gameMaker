#include "stdafx.h"
#include "StageOne.h"

#include "ObjMgr.h"
#include "MenuButton.h"
#include "BackGround.h"


CStageOne::CStageOne()
{
}

CStageOne::~CStageOne()
{
}

void CStageOne::Initialize(void)
{
	CObjMgr::GetInst()->ScrollMax = 0;
	CObjMgr::GetInst()->AddBackGround(new CBackGround, OBJ_BACKGROUND
		, 640, L"Title");

	CObjMgr::GetInst()->AddObject(new   CMenuButton, OBJ_UI
		, D3DXVECTOR3(850, 600, 0));
}
int CStageOne::Update(void)
{


	return 0;
}
void CStageOne::Render(void)
{

}
void CStageOne::Release(void)
{

}