
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

	printf("������ �Է��ϼ��� : ");
	scanf("%d", &n);

	printf("%d���丮�� : %d\n", n, factorial(n));

	return 0;
}