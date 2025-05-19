#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
	int i, j, k, N;
	scanf("%d", &N);
	
	for (i = 1; i <= N; i++) 
	{
		for (j = N - i; j > 0; j--)
		{
			printf(" ");
		}
		for (k = 0; k < i; k++)
		{
			printf("*");
		}
		printf("\n");
	}
		
	
		
}