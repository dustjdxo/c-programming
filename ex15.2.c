#include <stdio.h>

int plus(int x, int y);

int main()
{
	int a, b, c = 0;
	printf("ù��°�� ���� �ι�° �� ���� ���ϴ� ���α׷��Դϴ�.\n");

	printf("ù��° ���� �Է��Ͻÿ�. : ");
	scanf(" %d", &a);

	printf("�ι�° ���� �Է��Ͻÿ�. : ");
	scanf(" %d", &b);

	c = plus(a, b);

	printf("ó���Է��Ͻ� %d���� �ι�° �Է��Ͻ� %d�� ������ %d�Դϴ�.", a, b, c);

}

int plus(int x, int y)
{
	int sum = 0;

	for (int i = x; i < y + 1; ++i)
	{
		sum = sum + i;
	}

	return sum;
}
	// ����ڰ� �ΰ��� ���� �Է��Ѵ�. ù��° ������ �ι��������� �� �����ִ� �Լ�.
	// 