#include <stdio.h>

void comp(int x, int y);
int plus(int x, int y);

int main()
{
	int a, b, c = 0;
	printf("���� �� ���� ù��° ���� �Է��Ͻÿ�. : ");
	scanf(" %d", &a);

	printf("���� �� ���� �ι�° ���� �Է��Ͻÿ�. : ");
	scanf(" %d", &b);

	comp(a, b); //�Լ� ȣ�� ��
	c = plus(a, b);
	printf("�Է��Ͻ� %d�� %d�� ���� %d�Դϴ�.\n", a, b, c);
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

int plus(int x, int y)
{
	return x + y;
}
	// ���ڸ� ����ڰ� �ΰ��� �Է��ؼ� ������� �� ū�� Ȯ�� �Լ���.
	// 