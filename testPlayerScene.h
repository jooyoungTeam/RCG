#pragma once
#include "gameNode.h"
class testPlayerScene : public gameNode
{
private:

public:
	testPlayerScene() {}
	~testPlayerScene() {}

public:
	virtual HRESULT init();
	virtual void render();
	virtual void update();
	virtual void release();
};

