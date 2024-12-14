#if 0

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
	int min = 1000000, max = -1000000, N;
	scanf("%d", &N);

	for (int i = 0; i < N; i++)
	{
		int a;
		scanf("%d", &a);
		if (a < min)
		{
			min = a;
		}
		if (a > max)
		{
			max = a;
		}
	}
	printf("%d %d", min, max);
	
}

#endif