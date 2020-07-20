#include "stdafx.h"
#include "testPlayerScene.h"

HRESULT testPlayerScene::init()
{
	return S_OK;
}

void testPlayerScene::render()
{
	TextOut(getMemDC(), 10, 100, "Player Scene", strlen("Player Scene"));
}

void testPlayerScene::update()
{
}

void testPlayerScene::release()
{
}
