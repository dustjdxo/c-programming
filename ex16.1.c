#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
	srand((unsigned int)time(NULL));
	int score[5];
	int avr = 0;
	int count = 0;

	for (int i = 0; i < 5; ++i)
	{
		score[i] = rand() % 100 + 0;

		avr += score[i];

		printf("%d ", score[i]);
	}

	for (int i = 0; i < 5; ++i)
	{
		if (score[i] < avr / 5)
		{
			count += 1;
		}
	}

	printf("��հ��� %d�Դϴ�.\n", avr / 5);
	printf("��������� �л����� %d �Դϴ�.\n", count);
}




// 5���� ���������� ��� �� ��չ̸� �л��� ���ϱ�
// 
// 