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

	printf("����, ����, �� �� �ϳ��� �Է��Ͻÿ� : ");
	scanf(" %s", str);

	
	// show user choice
	user_choice = show(str, user_choice);

	// show com choice
	show2(com_choice);
	
	// compare
	compare(com_choice, user_choice);
}

// ���������� ���α׷�
// 
// 