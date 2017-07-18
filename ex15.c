#include <stdio.h>

void comp(int a, int b);

int main()
{
	int a, b;
	printf("비교할 두 수중 첫번째 값을 입력하시오. : ");
	scanf(" %d", &a);

	printf("비교할 두 수중 두번째 값을 입력하시오. : ");
	scanf(" %d", &b);

	comp(a, b);
}

void comp(int x, int y)
{
	if (x < y)
	{
		printf("입력하신 둘 중 더 큰값은 %d 입니다.\n", y);
	}

	if (x > y)
	{
		printf("입력하신 둘 중 더 큰값은 %d 입니다.\n", x);
	}
}
	// 숫자를 사용자가 두개를 입력해서 어느것이 더 큰지 확인 함수로.
	// 