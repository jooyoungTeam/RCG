#include "stdafx.h"
#include "iEvent.h"

iCameraMove::iCameraMove(POINTFLOAT targetLocation, float speed)
{
}

void iCameraMove::eventStart()
{
}

bool iCameraMove::eventUpdate()
{
	float angle = getAngle(CAMERAMANAGER->getX(), CAMERAMANAGER->getY(), mTargetLocation.x, mTargetLocation.y);

	CAMERAMANAGER->setX(CAMERAMANAGER->getX() + cos(angle) * mSpeed * TIMEMANAGER->getElapsedTime());
	CAMERAMANAGER->setY(CAMERAMANAGER->getY() - sin(angle) * mSpeed * TIMEMANAGER->getElapsedTime());

	if (getDistance(CAMERAMANAGER->getX(), CAMERAMANAGER->getY(), mTargetLocation.x, mTargetLocation.y) < 3)
	{
		CAMERAMANAGER->setX(mTargetLocation.x);
		CAMERAMANAGER->setY(mTargetLocation.y);
		return true;
	}
	return false;
}

iWaitForSecond::iWaitForSecond(float timer)
{
	Timer = 0;
	MaxTimer = timer;
}

void iWaitForSecond::eventStart()
{
}

bool iWaitForSecond::eventUpdate()
{
	Timer++;

	if (Timer > MaxTimer)
	{
		return true;
	}

	return false;
}