#include <stdio.h>

void comp(int a, int b);

int main()
{
	int a, b;
	printf("���� �� ���� ù��° ���� �Է��Ͻÿ�. : ");
	scanf(" %d", &a);

	printf("���� �� ���� �ι�° ���� �Է��Ͻÿ�. : ");
	scanf(" %d", &b);

	comp(a, b);
}

void comp(int x, int y)
{
	if (x < y)
	{
		printf("�Է��Ͻ� �� �� �� ū���� %d �Դϴ�.\n", y);
	}

	if (x > y)
	{
		printf("�Է��Ͻ� �� �� �� ū���� %d �Դϴ�.\n", x);
	}
}
	// ���ڸ� ����ڰ� �ΰ��� �Է��ؼ� ������� �� ū�� Ȯ�� �Լ���.
	// 