#if 0
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
	int N, X;
	
	scanf("%d %d", &N, &X);
	
	int a = 0;

	for (int i = 0; i < N; i++)
	{
		scanf("%d", &a);
		if (X > a)
		{
			printf("%d ", a);
		}

	}

}

#endif