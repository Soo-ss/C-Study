
#pragma warning (disable : 4996)

#include <stdio.h>

int main()
{
	int m = 11; // Modulus
	int a = 7; // Multiflier
	int c = 5; // Increment
	int s = 3; // Seed

	int n;

	printf("난수의 개수를 입력하세요 : ");
	scanf("%d", &n);

	for (int i = 0; i < n; ++i)
	{
		s = (a*s + c) % m;
		printf("%d ", s);
	}

	return 0;
}