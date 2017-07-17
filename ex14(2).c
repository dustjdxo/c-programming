#include <stdio.h>

void cal();

int main()
{
	cal();
}

void cal()
{
	int n1;
	printf("       2 월 달      \n");
	printf("--------------------\n");
	printf("일 월 화 수 목 금 토\n");
	printf("--------------------\n");
	for (n1 = 1; n1 < 29; ++n1)
	{
		printf("%d ", n1);
		{
			if (n1 < 10)
				printf(" ");
			if (n1 % 7 == 0)
				printf("\n");
		}
	}
	printf("\n\n");
}
	// 사각형의 둘레(2x + 2y)와 면적(x * y)을 구하는 함수를써라. 
	// 둘레 따로 면적따로.