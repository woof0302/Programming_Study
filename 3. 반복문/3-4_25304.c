#if 0

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
	int X, N, i, a, b, tot = 0;
	scanf("%d", &X);
	scanf("%d", &N);

	for (i = 0; i < N; i++)
	{
		scanf("%d %d", &a, &b);
		tot = tot + a * b;
	}

	if (tot == X)
	{
		printf("Yes");
	}
	
	else 
	{
		printf("No");
	}
}

#endif