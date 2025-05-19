#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
	int x, y;
	scanf("%d%d", &x, &y);
	printf("%d\n%d\n%d\n%d\n", x * (y % 10), x * ((y % 100)/10), x * (y / 100), x * y);

}