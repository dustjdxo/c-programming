#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
	char select;

	while(1)
	{
		srand((unsigned int)time(NULL));
		int kor, eng, math, avg;
		math = rand() % 50 + 50;
		eng = rand() % 50 + 50;
		kor = rand() % 50 + 50;
		avg = (math + eng + kor) / 3;

		printf("���� :%d, ���� :%d, ���� :%d\n", kor, eng, math);
		printf("����� ������ ������ ��հ��� %d�Դϴ�. \n", avg);
		printf("�ٽ��ѹ� �Ͻðڽ��ϱ�? (y / n) : \n");
		scanf(" %c", &select);

		if (select == 'y')
			continue;

		if (select == 'n')
		{
			printf("���� ���ô��� ����ϼ̽��ϴ�. �λ��������. \n");
			break;
		}
	}
}

	// ���� ���� ���� 50~100 ���� ������ ���� �ް� ����� ����.