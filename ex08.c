#include <stdio.h>
#include <stdlib.h>
#include <time.h>


int main()
{
	srand((unsigned int)time(NULL));	//	 시드 시간 값

	int a = rand() % 6 + 1;
	char select;                       //   사용자가 입력한 값이 select에 저장된다.

	while (1) {
		printf("값을 입력하세요 (y /n) : ");
		scanf(" %c", &select);

		if (select == 'y')
			printf("당신은 Y를 입력하셨습니다.\n");

		if (select == 'n')
			printf("당신은 N를 입력하셨습니다.\n");
		
		if (select == 'x')
			break;
	}
}