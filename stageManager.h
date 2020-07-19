#pragma once
#include "gameNode.h"
class stageManager : public gameNode
{
private:


public:
	stageManager() {}
	~stageManager() {}
public:
	virtual HRESULT init();
	virtual void render();
	virtual void update();
	virtual void release();
public:

};

