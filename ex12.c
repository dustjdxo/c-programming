#include <stdio.h>

int main()
{
	int sum = 0;
	for (int n = 0; n <= 10; ++n)
	{
		sum = sum + n;
		printf("0부터 %d까지의 합은 %d입니다. \n", n, sum);

	}
}

	// 1부터 10까지의 합을 구하라. 2중 for루프를 써라
	// 첫줄에는 0부터1까지의 합 두번쨰줄은 0부터 2까지의 합.