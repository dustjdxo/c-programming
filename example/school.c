#include <stdio.h>

int main()
{
	int point;
	char level;

	printf("����� ������? : ");
	scanf("%d", &point);

	if (point >= 80)
		level = 'A';
	else if (point >= 60)
		level = 'B';
	else if (point >= 40)
		level = 'C';
	else if (point >= 20)
		level = 'D';

	printf("����� ����� %c�Դϴ�. \n", level);

}