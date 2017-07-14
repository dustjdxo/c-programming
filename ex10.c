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

		printf("국어 :%d, 영어 :%d, 수학 :%d\n", kor, eng, math);
		printf("당신의 점수의 국영수 평균값은 %d입니다. \n", avg);
		printf("다시한번 하시겠습니까? (y / n) : \n");
		scanf(" %c", &select);

		if (select == 'y')
			continue;

		if (select == 'n')
		{
			printf("시험 보시느라 고생하셨습니다. 인생ㅈ망년아. \n");
			break;
		}
	}
}

	// 국어 영어 수학 50~100 까지 랜덤한 값을 받고 평균을 구해.