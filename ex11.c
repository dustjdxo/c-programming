#include <stdio.h>

int main()
{
	double radius, area;
	double pi = 3.14;
	int r;

	printf("원의 둘레와 원의 면적을 구하는 프로그램입니다.\n반지름의 길이를 입력하시오. : ");
	scanf(" %d", &r);
	radius = 2 * pi * r;
	area = r * r * pi;

	printf("반지름이 %d인 원의 둘레는 %.2lf이고, 원의 면적은 %.2lf입니다.\n", r, radius, area);
}

	// 원의 둘레(ratius)와 면적(area)을 구하라. 
	// 원의 둘레: 2pi x반지름,  원의 면적: 반지름 x반지름 x3.14