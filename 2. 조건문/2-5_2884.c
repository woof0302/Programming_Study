#if 0

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
	int H, M;
	scanf("%d %d", &H, &M);

	if (45 > M)
	{
		if (H == 0)
		{
			H = 23;
			M = 60 - (45 - M);
		}
		else
		{
			H = H - 1;
			M = 60 - (45 - M);
		}
	}
	else
	{
		M = M - 45;
	}

	printf("%d %d", H, M);

	return 0;
}
#endif