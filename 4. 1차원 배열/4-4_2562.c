#if 0

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
	int a;	

	int max = 0, num = 0;

	for (int i = 1; i <= 9; i++)
	{
		scanf("%d", &a);
	
		if (a > max)
		{
			max = a;
			num = i;
		}
	}

	printf("%d\n%d", max, num);
}

#endif