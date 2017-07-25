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

	printf("평균값은 %d입니다.\n", avr / 5);
	printf("평균이하인 학생수는 %d 입니다.\n", count);
}




// 5명의 시험점수의 평균 및 평균미만 학생수 구하기
// 
// 