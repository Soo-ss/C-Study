
#pragma warning (disable : 4996)

#include <stdio.h>

int arr[] = { 1,2,3,4,0 };
const int tmp = sizeof(arr) / sizeof(int);
const int n = tmp - 1;
bool state[n];

void powerset(int k)
{
	if (k == n)
	{
		printf("{ ");
		for (int i = 0; i < n; ++i)
		{
			if (state[i])
				printf("%d ", arr[i]);
		}

		printf("}\n");

		return;
	}

	state[k] = true;
	powerset(k + 1);

	state[k] = false;
	powerset(k + 1);
}

int main()
{
	powerset(0);

	return 0;
}
