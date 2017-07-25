#include <stdio.h>

int main()
{
	int day[10] = {31, 0, 31, 30, 31, 30, 31, 31, 30};
	int year;

	printf("당신이 총일수를 알고 싶은 년도를 입력하시오.\n");
	scanf(" %d", &year);

	for (int i = 0; i < 9; ++i)
	{
		if (year % 4 == 0)
			day[1] = 29;
		else
			day[1] = 28;

		day[9] += day[i];
	}

	printf("1월부터 9월까지 총 합은 %d입니다.", day[9]);

}




// 2020년 1월 부터 9월까지 총 몇일인지?
// 
// 