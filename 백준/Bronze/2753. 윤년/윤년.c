#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
	int year;
	scanf("%d", &year);

	if (year%4 ==0)
	{
		if ((year % 100 != 0) | (year % 400 == 0))
		{
			printf("1");
		}
		else printf("0"); // 이 부분의 처리를 빼먹음
	}
	else printf("0");
}