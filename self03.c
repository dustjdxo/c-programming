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

	// 1���� 10������ ���� ���϶�. 2�� for������ ���
	// ù�ٿ��� 0����1������ �� �ι������� 0���� 2������ ��.