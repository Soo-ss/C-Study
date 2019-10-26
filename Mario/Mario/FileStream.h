#pragma once

// fopen ��µ� �̰� �����ϰ� �������� Ŭ������ �����.

#include "value.h"

class CFileStream
{
public:
	CFileStream();
	~CFileStream();

private:
	FILE* m_pFile;
	int m_iFileSize;
	bool m_bOpen; // ������ ���ȴ��� Ȯ���ϴ� ����

public:
	bool Open(char* pFileName, char* pMode);
	bool Close();

	// � Ÿ���� �����͸� ������ �� �� �����Ƿ� void* Ÿ��
	void Read(void* pData, int iSize);

	// readline�� ������ �а� �� ����� �ǵ����ش�. �׷��� ������ ����
	// �� �� ����� �����Ʈ���� �˼������Ƿ� �̷�����.
	void ReadLine(void* pData, int& iSize);
	void Write(void* pData, int iSize);
};

