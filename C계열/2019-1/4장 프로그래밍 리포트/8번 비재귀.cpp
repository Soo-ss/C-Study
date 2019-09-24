
#pragma warning (disable : 4996)

#include <stdio.h>

int factorial(int n)
{
	int result = 1;

	for (int i = 1; i <= n; i++)
	{
		result *= i;
	}

	return result;
}

int main()
{
	int n;

	printf("정수를 입력하세요 : ");
	scanf("%d", &n);

	printf("%d팩토리얼 : %d\n", n, factorial(n));

	return 0;
}