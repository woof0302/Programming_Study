#if 0

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
	int arr[42] = {0};
	int same = 0;

	for (int i = 0; i < 10; i++)
	{
		int a;
		scanf("%d", &a);
		arr[a % 42] = 1;
	}

	for (int i = 0; i < 42; i++)
	{
		same += arr[i];
	}

	printf("%d", same);
}

#endif


