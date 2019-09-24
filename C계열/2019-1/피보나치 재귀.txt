
#pragma warning (disable : 4996)

#include <stdio.h>

int fib(int n)
{
	if (n == 0 || n == 1)
		return 1;

	return fib(n - 1) + fib(n - 2);
}

int main()
{
	int n;

	printf("정수를 입력하세요 : ");
	scanf("%d", &n);

	for (int i = 0; i < n; i++)
	{
		printf("%d ", fib(i));
	}

	return 0;
}