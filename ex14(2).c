#include <stdio.h>

void cal();

int main()
{
	cal();
}

void cal()
{
	int n1;
	printf("       2 �� ��      \n");
	printf("--------------------\n");
	printf("�� �� ȭ �� �� �� ��\n");
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
	// �簢���� �ѷ�(2x + 2y)�� ����(x * y)�� ���ϴ� �Լ������. 
	// �ѷ� ���� ��������.