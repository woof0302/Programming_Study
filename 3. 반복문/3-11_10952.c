#if 0

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
	while(1)
	{
		int a, b;
		scanf("%d%d", &a, &b);
		if ((a == 0) && (b == 0))
		{
			return 0;
		}
		printf("%d\n", a + b);
	}
	
}

#endif