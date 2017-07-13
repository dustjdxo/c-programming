#include <stdio.h>
#include <stdlib.h>
#include <time.h>


int main()
{
	srand((unsigned int)time(NULL));	//	 시드 시간 값

	int user = 0;						// 사용자가 굴린 주사위 값
	int com = 0;						// 컴퓨터가 굴린 주사위 값
	
	char select;                       //   사용자가 입력한 값이 select에 저장된다.
	char dice;

	while (1) {
		printf("게임을 시작하시겠습니까? (y /n) : ");
		scanf(" %c", &select);

		if (select == 'y')
		{
			printf("주사위를 굴려주세요.d를 누르세여....\n");
			scanf(" %c", &dice);
			if (dice == 'd')
			{
				user = rand() % 6 + 1;		// 사용자 주사위 값을 저장한다.
				com = rand() % 6 + 1;		// 컴퓨터 주사위 값을 저장한다.

				printf("\n당신의 주사위 값은 %d입니다.\n컴퓨터의 주사위 값은 %d입니다.\n\n", user, com);
				
				if (user > com)
					printf("당신은 이겼습니다.\n\n");

				else if (user < com)
					printf("당신은 패배하셨습니다.\n\n");

				else if (user == com)
					printf("당신은 비기셨습니다.\n\n");
			}

			else
				printf("d를 눌러주세요\n");
		}

		if (select == 'n')
		{
			printf("\n게임을 종ㄹㅛ.. 안할꺼면 왜 들어왔냐 새꺄ㅡㅡ.\n\n");
			break;
		}
	}
}