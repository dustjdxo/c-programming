#include <stdio.h>
#include <stdlib.h>
#include <time.h>


int main()
{
	srand((unsigned int)time(NULL));	//	 �õ� �ð� ��

	int a = rand() % 6 + 1;
	char select;                       //   ����ڰ� �Է��� ���� select�� ����ȴ�.

	while (1) {
		printf("���� �Է��ϼ��� (y /n) : ");
		scanf(" %c", &select);

		if (select == 'y')
			printf("����� Y�� �Է��ϼ̽��ϴ�.\n");

		if (select == 'n')
			printf("����� N�� �Է��ϼ̽��ϴ�.\n");
		
		if (select == 'x')
			break;
	}
}