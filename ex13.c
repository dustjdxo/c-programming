#include <stdio.h>

double radius(double pi, int r);
double area(double pi, int r);

int main()
{
	double pi = 3.14;

	double num_1 = radius(pi, 5);
	double num_2 = area(pi, 5);
	printf("원의 둘레는%.2lf 입니다. 원의 면적은%.2lf입니다.\n", num_1, num_2);
}

double radius(double pi, int r)
{
	return(2 * pi * r);
}

double area(double pi, int r)
{
	return(pi * r * r);
}

	// 원의 둘레(2*pi*r)와 면적(pi*r*r)을 구하는 함수를써라. 
	// 둘레 따로 면적따로.