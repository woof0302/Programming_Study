#if 0

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
	int N, V;
	scanf("%d", &N);
	
	int arr[100];

	for (int i = 0; i < N; i++)
	{
		scanf("%d ", &arr[i]);
	}

	scanf("%d", &V);

	int count = 0;

	for (int i = 0; i < N; i++)
	{
		if (arr[i] == V)
		{
			count++;
		}
	}

	printf("%d", count);
}

#endif