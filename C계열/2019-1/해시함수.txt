
#pragma warning (disable : 4996)

#include <stdio.h>

int main()
{
	int arr[11], n, idx;
	bool isExist[11] = { false }, isCol = false;

	printf("입력 : ");
	scanf("%d", &n);

	idx = n % 11;
	arr[idx] = n;
	isExist[idx] = true;
	printf("인덱스 : %d 값 : %d\n", idx, arr[idx]);

	for (int i = 0; i < 11; ++i)
	{
		printf("입력 : ");
		scanf("%d", &n);

		for (int j = 0; j < 11; ++j)
		{
			if (isExist[j] == true && j == n % 11 && arr[j] != n)
			{
				printf("Collision!\n");
				isCol = true;
				break;
			}
		}

		if (isCol)
			break;

		idx = n % 11;
		arr[idx] = n;
		isExist[idx] = true;
		printf("인덱스 : %d 값 : %d\n", idx, arr[idx]);
	}

	return 0;
}