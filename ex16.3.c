#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include <time.h>

int main()
{
	float std = 0;
	float sco[5] = { 55, 21, 32, 47, 19 };
	float avr = 0;

	for (int i = 0; i < 5; ++i)
	{

		avr += sco[i];
	}

	for (int i = 0; i < 5; ++i)
	{
		std += (sco[i] - (avr/ 5)) * (sco[i] - (avr/5)) / 5;
	}

	std = sqrt(std);

	printf("��ü �л��� ��հ��� %f�Դϴ�.\n", avr / 5);
	printf("ǥ�������� ���� %f �Դϴ�.\n", std);
}




// 5�� �ڷ��� ǥ�������� ���϶�. 
// 
// 