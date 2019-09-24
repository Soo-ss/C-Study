
#pragma warning (disable : 4996)

#include <stdio.h>

int ExpModZViaRepeatedSquaring(int a, int n, int z);

int main()
{
	int a, n, z;

	printf("a, n, z를 입력하세요 : (a^n mod z)\n");
	scanf("%d%d%d", &a, &n, &z);

	printf("값 : %d\n", ExpModZViaRepeatedSquaring(a, n, z));

	return 0;
}

int ExpModZViaRepeatedSquaring(int a, int n, int z)
{
	int result, x;

	result = 1;
	x = a % z;

	while (n > 0)
	{
		if (n % 2 == 1)
			result = (result*x) % z;

		x = (x*x) % z;
		n /= 2;
	}

	return result;
}
