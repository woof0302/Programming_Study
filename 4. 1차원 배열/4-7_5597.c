#if 0

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
	int num[31] = {0};

	for (int i = 0; i < 28; i++)
	{
		int sub;
		scanf("%d", &sub);
		num[sub] = 1;
	}

	for (int i = 1; i < 31; i++)
	{
		if (num[i] == 0)
		{
			printf("%d\n", i);
		}
	}
}

#endif


