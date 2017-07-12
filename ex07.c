#include<stdio.h>

int main()
{
	int a, b, c;
	a = 123;
	b = 12313;
	c = 4123123;

	if (a > b) {
		if (a < c)
			printf("a는 중간수 입니다.\n");
		else if (a > c) {
			if (b > c)
				printf("b는 중간수 입니다.\n");
			else if (b < c)
				printf("c는 중간수 입니다.\n");
		}
	}
		if (a < b) {
			if (a > c)
				printf("a는 중간수 입니다.\n");
			else if (a < c) {
				if (b < c)
					printf("b는 중간수 입니다.\n");
				else if (b > c)
					printf("c는 중간수 입니다.\n");
			}
		}
	}

//a와 b를 비교 에이가 비보다크면 에이와 씨를 비교, 에이가 씨보다 작으면 에이는 두번째 수, 
//씨가 에이보다 작으면 에이가 가장큰수