
#pragma warning (disable : 4996)

#include <stdio.h>

int main()
{
	int i, j, temp;
	int arr[10] = { 7, 8, 5, 1, 10, 3, 4, 2, 6, 9 };

	for (i = 0; i < 9; i++)
	{
		j = i;
		while (arr[j] > arr[j + 1])
		{
			temp = arr[j];
			arr[j] = arr[j + 1];
			arr[j + 1] = temp;
			j--;
		}
	}

	for (int a = 0; a < 10; a++)
		printf("%d ", arr[a]);

	return 0;
}