#include <stdio.h>


int dule(int a, int b);
int area(int a, int b);

int main()
{
	int num1 = dule(2, 3);
	int num2 = area(2, 3);
	printf("�簢���� �ѷ��� %d, �簢���� ������ %d\n", num1, num2);
}

int dule(int a, int b)
{
	return(2 * a + 2 * b);
}

int area(int a, int b)
{
	return(a * b);
}
	// �簢���� �ѷ�(2x + 2y)�� ����(x * y)�� ���ϴ� �Լ������. 
	// �ѷ� ���� ��������.