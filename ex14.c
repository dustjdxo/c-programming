#include <stdio.h>


int dule(int a, int b);
int area(int a, int b);

int main()
{
	int num1 = dule(2, 3);
	int num2 = area(2, 3);
	printf("사각형의 둘레는 %d, 사각형의 면적은 %d\n", num1, num2);
}

int dule(int a, int b)
{
	return(2 * a + 2 * b);
}

int area(int a, int b)
{
	return(a * b);
}
	// 사각형의 둘레(2x + 2y)와 면적(x * y)을 구하는 함수를써라. 
	// 둘레 따로 면적따로.