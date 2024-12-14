#if 0

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
	int N, M;  //  바구니 / 몇 번 
	scanf("%d %d", &N, &M);
	int bas[101] = {0};
	

	for (int a = 0; a < M; a++)
	{
		int i, j, k;
		scanf("%d %d %d", &i, &j, &k);

		for (int b = i; b <= j; b++)
		{
			bas[b] = k;
		}

	}

	for (int i = 1; i <= N; i++)
	{
		printf("%d ", bas[i]);
	}

}

#endif



