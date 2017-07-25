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

	printf("전체 학생의 평균값은 %f입니다.\n", avr / 5);
	printf("표준편차의 값은 %f 입니다.\n", std);
}




// 5개 자료의 표준편차를 구하라. 
// 
// 