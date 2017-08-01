#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "function.h"

int main()
{
	srand((unsigned int)time(NULL));


	char* str = (char*)malloc(sizeof(char));

	int user_choice = 0;
	int com_choice = rand() % 3 + 1;

	printf("가위, 바위, 보 중 하나를 입력하시오 : ");
	scanf(" %s", str);

	
	// show user choice
	user_choice = show(str, user_choice);

	// show com choice
	show2(com_choice);
	
	// compare
	compare(com_choice, user_choice);
}

// 가위바위보 프로그램
// 
// 