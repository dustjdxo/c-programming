#include <stdio.h>

int main()
{
	double radius, area;
	double pi = 3.14;
	int r;

	printf("���� �ѷ��� ���� ������ ���ϴ� ���α׷��Դϴ�.\n�������� ���̸� �Է��Ͻÿ�. : ");
	scanf(" %d", &r);
	radius = 2 * pi * r;
	area = r * r * pi;

	printf("�������� %d�� ���� �ѷ��� %.2lf�̰�, ���� ������ %.2lf�Դϴ�.\n", r, radius, area);
}

	// ���� �ѷ�(ratius)�� ����(area)�� ���϶�. 
	// ���� �ѷ�: 2pi x������,  ���� ����: ������ x������ x3.14