#include "Stage.h"
#include "FileStream.h"

CStage::CStage()
{
}

CStage::~CStage()
{
}

bool CStage::Init()
{
	return true;
}

bool CStage::Init(char * pFileName)
{
	CFileStream file;

	if (!file.Open(pFileName, "rt"))
		return false;

	// close는 따로 안해줘도 됨
	// 왜? 소멸자가 하고있음

	for (int i = 0; i < 10; i++)
	{
		int iSize = 0;
		file.ReadLine(m_cStage[i], iSize);

		for (int j = 0; j < 50; j++)
		{
			cout << m_cStage[i][j];
		}

		cout << endl;
	}

	cout << endl << endl;

	return true;
}
