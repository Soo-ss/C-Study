
#pragma warning (disable : 4996)

#include <stdio.h>

int factorial(int n)
{
	if (n < 1)
		return 1;

	else
		return n * factorial(n - 1);
}

int main()
{
	int n;

	printf("������ �Է��ϼ��� : ");
	scanf("%d", &n);

	printf("%d���丮�� : %d\n", n, factorial(n));

	return 0;
}