#pragma once
#include "iEvent.h"
#include "singletonBase.h"

class eventManager : public singletonBase<cameraManager>
{
public:
	// 기존 싱글톤과 차이점
	// 1. 상속 유무
	// 2. 데이터영역(실질적으로는 BSS)에 메모리가 잡힘
	// 3. 마찬가지로 처음 호출하면 instance 메모리를 잡는다
	//static eventManager* getInstance()
	//{
	//	static eventManager instance;
	//	return &instance;
	//}
private:
	// 외부 생성 차단
	eventManager() {}
	~eventManager() {}
public:
	// 이벤트 담을 변수
	vector<iEvent*> mEventQueue;

	void update();
	// 이벤트 추가
	void addEvent(iEvent* pEvent);

	bool isEvent() { mEventQueue.size() > 0 ? true : false; }
};

