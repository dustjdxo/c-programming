#include<stdio.h>

int main()
{
	int a, b, c;
	a = 123;
	b = 12313;
	c = 4123123;

	if (a > b) {
		if (a < c)
			printf("a�� �߰��� �Դϴ�.\n");
		else if (a > c) {
			if (b > c)
				printf("b�� �߰��� �Դϴ�.\n");
			else if (b < c)
				printf("c�� �߰��� �Դϴ�.\n");
		}
	}
		if (a < b) {
			if (a > c)
				printf("a�� �߰��� �Դϴ�.\n");
			else if (a < c) {
				if (b < c)
					printf("b�� �߰��� �Դϴ�.\n");
				else if (b > c)
					printf("c�� �߰��� �Դϴ�.\n");
			}
		}
	}

//a�� b�� �� ���̰� �񺸴�ũ�� ���̿� ���� ��, ���̰� ������ ������ ���̴� �ι�° ��, 
//���� ���̺��� ������ ���̰� ����ū��