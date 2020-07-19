#pragma once
#include "gameNode.h"
class player : public gameNode
{
private:

public:
	player() {}
	~player() {}
public:
	virtual HRESULT init();
	virtual void render();
	virtual void update();
	virtual void release();
public:
};

