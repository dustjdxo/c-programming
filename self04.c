#include <stdio.h>

int main()
{
	int i, j, k;

	for (i = 5; i > 0; --i)
	{

			for (j = 0; j < 5 - i ; ++j)
			{
				printf(" ");
			}
			for (k = 0; k < i ; ++k)
			{
				printf("*");
			}
	printf("\n");
	}
}

	// 1���� 10������ ���� ���϶�. 2�� for������ ���
	// ù�ٿ��� 0����1������ �� �ι������� 0���� 2������ ��.