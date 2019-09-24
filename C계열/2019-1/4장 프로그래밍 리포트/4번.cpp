
#pragma warning (disable : 4996)

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
	srand((unsigned int)time(NULL));

	int i, j, temp;
	int arr[5] = { 17, 9, 5, 23, 21 };

	for (i = 0; i < 5; i++)
	{
		j = rand() % 5;

		temp = arr[i];
		arr[i] = arr[j];
		arr[j] = temp;
	}

	for (int a = 0; a < 5; a++)
		printf("%d ", arr[a]);

	return 0;
}