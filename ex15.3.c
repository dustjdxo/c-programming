#include <stdio.h>

int keyboard(int money);
//int mouse();
//int notebook();

int main()
{
	int money;
	int menu;
	int rest = 0;

	printf("당신의 현금 보유량을 입력하시오. : ");
	scanf(" %d", &money);

	while (1)
	{

		printf("mmmmmmmmmmmmmmmmm 컴퓨터 다나와 mmmmmmmmmmmmmmmmm\n\n");
		printf("1. 키보드\n");
		printf("2. 마우스\n");
		printf("3. 노트북\n\n");
		printf("mmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmm\n\n");

		scanf(" %d", &menu);

		if (menu == 1)
		{
			money = keyboard(money);
			printf("현재 남은 현금 보유량은 %d 입니다.\n", money);
		}

		//if (menu == 2)
		//	mouse();

		//if (menu == 3)
		//	notebook();

	}
}
int keyboard(int money)
{
	int key;
	printf("키보드를 구입합니다.\n");
	printf("1. 1만원\n");
	printf("2. 3만원\n");
	printf("3. 5만원\n");
	scanf(" %d", &key);

	if (key == 1)
		money = money - 10000;

	if (key == 2)
		money = money - 30000;

	if (key == 3)
		money = money - 50000;

	return money;
}


//int mouse()
//{
//
//}
//int notebook()
//{
//
//}


	// 컴퓨터 장비 사는 프로그램
	// 실행 처음 메뉴가 나온다 1번 키보드() 2번 마우스 3번 스피커
	// 돈 얼마 있는지 먼저 설정 구입후 가격 만큼 차감