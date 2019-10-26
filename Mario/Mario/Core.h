#pragma once

#include "value.h"

// 헤더파일에는 클래스의 선언부분이 들어온다.
class CCore
{
private:
	CCore();
	~CCore();

private:
	static CCore*	m_pInst;

public:
	static CCore* GetInst();
	static void DestroyInst();

public:
	// 이 함수는 전체 게임을 초기화하는 역할을 한다.
	bool Init();

	// 이 함수는 게임을 동작시키는 역할을 한다.
	void Run();
};

