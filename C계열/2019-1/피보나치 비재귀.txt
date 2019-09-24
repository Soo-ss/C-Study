
#pragma warning (disable : 4996)

#include <stdio.h>

void fib(int n)
{
	int arr[100];

	arr[0] = 1;
	arr[1] = 1;

	for (int i = 0; i < n; i++)
	{
		if (i == 0 || i == 1)
		{
			printf("%d ", arr[i]);
		}

		else
		{
			arr[i] = arr[i - 1] + arr[i - 2];
			printf("%d ", arr[i]);
		}
	}
}

int main()
{
	int n;

	printf("정수를 입력하세요 : ");
	scanf("%d", &n);

	fib(n);

	return 0;
}