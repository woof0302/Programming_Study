#if 0

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
	int N, M;
	scanf("%d %d", &N, &M);
	int bas[101];

	for (int b = 1; b <= N; b++)
	{
		bas[b] = b;
	}
	
	int i, j;
	for (int a = 0; a < M; a++)
	{	
		scanf("%d %d", &i, &j);
		int temp = bas[i];
		bas[i] = bas[j];
		bas[j] = temp;
	}

	for (int c = 1; c <= N; c++)
	{
		printf("%d ", bas[c]);
	}

}

#endif


