#if 0

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
	int A, B;
	scanf("%d %d", &A, &B);
	int C;
	scanf("%d", &C);

	int up = 0;
	B = (B + (C % 60));
	if (B > 59)
	{
		B = B % 60;
		up = 1;
	}

	A = ((A + (C / 60)) + up ) % 24 ;

	printf("%d %d", A, B);
}
#endif

