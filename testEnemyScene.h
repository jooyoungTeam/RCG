#pragma once
#include "gameNode.h"
class testEnemyScene : public gameNode
{
private:

public:
	testEnemyScene() {}
	~testEnemyScene() {}

public:
	virtual HRESULT init();
	virtual void render();
	virtual void update();
	virtual void release();
};

