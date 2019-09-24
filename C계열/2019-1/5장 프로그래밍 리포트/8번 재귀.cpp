
#pragma warning (disable : 4996)

#include <stdio.h>

int GCDR(int a, int b);

int main()
{
	int a, b;

	printf("�� ���� �Է��ϼ��� : \n");
	scanf("%d%d", &a, &b);

	printf("�� : %d\n", GCDR(a, b));

	return 0;
}

int GCDR(int a, int b)
{
	int r, temp;

	// make a largest
	if (a < b)
	{
		temp = a;
		a = b;
		b = temp;
	}

	if (b == 0)
		return a;

	r = a % b;

	return GCDR(b, r);
}