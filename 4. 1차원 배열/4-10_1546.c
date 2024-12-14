#if 0

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
	int n;
	scanf("%d", &n);
	double score[1000] = { 0, };
	double max = 0, sum = 0, average = 0;

	for (int i = 0; i < n; i++)
	{
		scanf("%lf", &score[i]);
		if (score[i] > max)
		{
			max = score[i];
		}
	}

	for (int i = 0; i < n; i++)
	{
		score[i] = score[i] / max * 100;
		sum = sum + score[i];
	}

	
	average = sum / n;
	printf("%lf", (double)average);
}

#endif


