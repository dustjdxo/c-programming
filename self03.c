#include <stdio.h>

int main()
{
	int i, j, k;

	for (i = 1; i < 6; ++i)
	{

			for (j = 5; j > i ; --j)
			{
				printf(" ");
			}
			for (k = 1; k < i + 1; ++k)
			{
				printf("*");
			}
	printf("\n");
	}
}

	// 1부터 10까지의 합을 구하라. 2중 for루프를 써라
	// 첫줄에는 0부터1까지의 합 두번쨰줄은 0부터 2까지의 합.