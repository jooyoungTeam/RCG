#include "stdafx.h"
#include "testEnemyScene.h"

HRESULT testEnemyScene::init()
{
	return S_OK;
}

void testEnemyScene::render()
{
	TextOut(getMemDC(), 10, 100, "Enemy Scene", strlen("Enemy Scene"));
}

void testEnemyScene::update()
{
}

void testEnemyScene::release()
{
}
