
#pragma warning (disable:4996)

#include <stdio.h>

int main()
{
	int arrX[100], arrY[100], indexX = 0, indexY = 0, n = 0;
	int arrAnd[100] = { 0 };
	int state = 0, equal = 0, a;

	printf("집합 X를 입력하세요 : (0 : 입력종료)\n");

	for (int i = 0; i < 100; ++i)
	{
		scanf("%d", &arrX[i]);

		indexX = i;

		if (arrX[i] == 0)
			break;
	}

	printf("집합 Y를 입력하세요 : (0 : 입력종료)\n");

	for (int i = 0; i < 100; ++i)
	{
		scanf("%d", &arrY[i]);

		indexY = i;

		if (arrY[i] == 0)
			break;
	}

	for (int i = 0; i < indexX; ++i)
	{
		for (int j = 0; j < indexY; ++j)
		{
			if (arrX[i] == arrY[j])
			{
				state = 1;
				break;
			}
		}

		if (state)
		{
			for (a = 0; a < n; ++a)
			{
				if (arrAnd[a] == arrX[i])
				{
					equal = 1;
					break;
				}
			}

			if (equal)
				equal = 0;

			else
			{
				arrAnd[n] = arrX[i];
				++n;
			}

			state = 0;
		}
	}

	if (n >= 0)
	{
		for (int i = 0; i < n; ++i)
			printf("%d ", arrAnd[i]);
	}

	else
		printf("교집합이 없습니다.\n");

	return 0;
}