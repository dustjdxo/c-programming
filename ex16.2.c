#include <stdio.h>

int main()
{
	int day[10] = {31, 0, 31, 30, 31, 30, 31, 31, 30};
	int year;

	printf("����� ���ϼ��� �˰� ���� �⵵�� �Է��Ͻÿ�.\n");
	scanf(" %d", &year);

	for (int i = 0; i < 9; ++i)
	{
		if (year % 4 == 0)
			day[1] = 29;
		else
			day[1] = 28;

		day[9] += day[i];
	}

	printf("1������ 9������ �� ���� %d�Դϴ�.", day[9]);

}




// 2020�� 1�� ���� 9������ �� ��������?
// 
// 