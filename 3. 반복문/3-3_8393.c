#if 0

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
	int n, i;
	int	sum = 0;
	scanf("%d", &n);
	for (i = 1; i <= n; i++)
	{
		sum = sum + i;
	}

	printf("%d", sum);

}

#endif