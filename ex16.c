#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
	srand((unsigned int)time(NULL));
	
	
	int a[5];



	int avr = 0;

	for (int i = 0; i < 5; ++i)
	{
		a[i] = rand() % 60 + 40; 
		avr += a[i];
		if (a[i] < 40)
		{
			a[i] = 40;
		}
		printf("%d\n", a[i]);
	}
	printf("��հ��� %d�Դϴ�.\n", avr / 5);
	
}




// 5���� �л��� ������ ��հ� if 40�� �̸��ΰ�� 40��
// 
// 