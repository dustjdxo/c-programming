#include <stdio.h>

int plus(int x, int y);

int main()
{
	int a, b, c = 0;
	printf("첫번째수 부터 두번째 수 까지 더하는 프로그램입니다.\n");

	printf("첫번째 수를 입력하시오. : ");
	scanf(" %d", &a);

	printf("두번째 수를 입력하시오. : ");
	scanf(" %d", &b);

	c = plus(a, b);

	printf("처음입력하신 %d부터 두번째 입력하신 %d의 총합은 %d입니다.", a, b, c);

}

int plus(int x, int y)
{
	int sum = 0;

	for (int i = x; i < y + 1; ++i)
	{
		sum = sum + i;
	}

	return sum;
}
	// 사용자가 두개의 수를 입력한다. 첫번째 수부터 두번쨰수까지 다 더해주는 함수.
	// 