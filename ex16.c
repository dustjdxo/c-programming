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
	printf("평균값은 %d입니다.\n", avr / 5);
	
}




// 5명의 학생들 점수의 평균값 if 40점 미만인경우 40점
// 
// 