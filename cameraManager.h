#pragma once
#include "singletonBase.h"
#include "image.h"

class cameraManager : public singletonBase<cameraManager>
{
private:
	float _left, _top;
	float _x, _y;
	float _width, _height;

	float _minLeft, _maxLeft;
	float _minTop,  _maxTop;


public:
	cameraManager() {}
	~cameraManager() {}
public:
	HRESULT init();
	void release();

};

