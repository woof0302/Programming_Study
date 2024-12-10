#if 0

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
	int a, b;

	while(scanf("%d %d", &a, &b) != -1) // EOF에 도달한 뒤 읽으면 -1을 반환 받는다
	{
		printf("%d\n", a + b);
	}
	
}

#endif