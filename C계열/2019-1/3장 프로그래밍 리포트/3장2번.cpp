
#pragma warning (disable : 4996)

#include <stdio.h>

int main()
{
	int s = 0, check, arr[13];

	printf("13자리 ISBN을 입력하세요 : \n");

	for (int i = 0; i < 13; ++i)
	{
		scanf("%d", &arr[i]);
	}

	for (int i = 0; i <= 11; ++i)
	{
		if (i % 2 == 0)
			s += arr[i];

		else
			s += arr[i] * 3;
	}

	if (s % 10 == 0)
		check = 0;

	else
		check = 10 - (s % 10);

	if (check == arr[12])
		printf("valid!\n");

	else
		printf("invalid!\n");

	return 0;
}