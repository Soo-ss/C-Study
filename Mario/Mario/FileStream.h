#pragma once

// fopen 썼는데 이걸 수월하게 쓰기위한 클래스를 만든다.

#include "value.h"

class CFileStream
{
public:
	CFileStream();
	~CFileStream();

private:
	FILE* m_pFile;
	int m_iFileSize;
	bool m_bOpen; // 파일이 열렸는지 확인하는 변수

public:
	bool Open(char* pFileName, char* pMode);
	bool Close();

	// 어떤 타입의 데이터를 읽을지 알 수 없으므로 void* 타입
	void Read(void* pData, int iSize);

	// readline은 한줄을 읽고 그 사이즈를 되돌려준다. 그래서 참조로 받음
	// 한 줄 사이즈가 몇바이트인지 알수없으므로 이렇게함.
	void ReadLine(void* pData, int& iSize);
	void Write(void* pData, int iSize);
};

