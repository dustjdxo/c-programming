#include <stdio.h>
#include <stdlib.h>
#include <time.h>


int main()
{
	srand((unsigned int)time(NULL));	//	 �õ� �ð� ��

	int user = 0;						// ����ڰ� ���� �ֻ��� ��
	int com = 0;						// ��ǻ�Ͱ� ���� �ֻ��� ��
	
	char select;                       //   ����ڰ� �Է��� ���� select�� ����ȴ�.
	char dice;

	while (1) {
		printf("������ �����Ͻðڽ��ϱ�? (y /n) : ");
		scanf(" %c", &select);

		if (select == 'y')
		{
			printf("�ֻ����� �����ּ���.d�� ��������....\n");
			scanf(" %c", &dice);
			if (dice == 'd')
			{
				user = rand() % 6 + 1;		// ����� �ֻ��� ���� �����Ѵ�.
				com = rand() % 6 + 1;		// ��ǻ�� �ֻ��� ���� �����Ѵ�.

				printf("\n����� �ֻ��� ���� %d�Դϴ�.\n��ǻ���� �ֻ��� ���� %d�Դϴ�.\n\n", user, com);
				
				if (user > com)
					printf("����� �̰���ϴ�.\n\n");

				else if (user < com)
					printf("����� �й��ϼ̽��ϴ�.\n\n");

				else if (user == com)
					printf("����� ���̽��ϴ�.\n\n");
			}

			else
				printf("d�� �����ּ���\n");
		}

		if (select == 'n')
		{
			printf("\n������ ������.. ���Ҳ��� �� ���Գ� �����Ѥ�.\n\n");
			break;
		}
	}
}