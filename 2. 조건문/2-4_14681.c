#if 0

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
	int x, y;

	scanf("%d%d", &x, &y);

	if (x > 0)
	{
		if (y > 0)
		{
			printf("1");
		}
		else printf("4");
	}
	else
	{
		if (y < 0)
		{
			printf("3");
		}
		else printf("2");
	}

	return 0;

}
#endif