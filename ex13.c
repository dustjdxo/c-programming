#include <stdio.h>

double radius(double pi, int r);
double area(double pi, int r);

int main()
{
	double pi = 3.14;

	double num_1 = radius(pi, 5);
	double num_2 = area(pi, 5);
	printf("���� �ѷ���%.2lf �Դϴ�. ���� ������%.2lf�Դϴ�.\n", num_1, num_2);
}

double radius(double pi, int r)
{
	return(2 * pi * r);
}

double area(double pi, int r)
{
	return(pi * r * r);
}

	// ���� �ѷ�(2*pi*r)�� ����(pi*r*r)�� ���ϴ� �Լ������. 
	// �ѷ� ���� ��������.