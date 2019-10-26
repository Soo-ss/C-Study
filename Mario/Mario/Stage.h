#pragma once

#include "value.h"

class CStage
{
public:
	CStage();
	~CStage();

private:
	char m_cStage[10][50];

public:
	// 이 함수는 그냥 초기화할 목적의 함수이다.
	bool Init();

	// 이 함수는 파일에서 정보를 읽어와서 설정할 목적의 함수이다.
	bool Init(char* pFileName);
};

