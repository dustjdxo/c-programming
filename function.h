#pragma once
#include <stdio.h>

int show(char* s, int u)	// char* s = str;   int u = user_choic int c = com_choice;
{

	if (!strncmp(s, "가위"))
	{
		u = 1;
	}

	if (!strncmp(s, "바위"))
	{
		u = 2;
	}

	if (!strncmp(s, "보"))
	{
		u = 3;
	}


	if (u == 1)
		printf("유저가 선택한 것은 '가위' 입니다. \n");

	if (u == 2)
		printf("유저가 선택한 것은 '바위' 입니다. \n");

	if (u == 3)
		printf("유저가 선택한 것은 '보' 입니다. \n");

	return u;
}

void show2(int c)
{

	if (c == 1)
		printf("컴퓨터가 선택한 것은 '가위' 입니다. \n");

	if (c == 2)
		printf("컴퓨터가 선택한 것은 '바위' 입니다. \n");

	if (c == 3)
		printf("컴퓨터가 선택한 것은 '보' 입니다. \n");
}

void compare(int c, int u)    // 
{
	if (u == 1)   //유저가 가위일때
	{
		if (c == 1)
			printf("무승부 입니다.\n");

		else if (c == 2)
			printf("당신은 졌습니다.\n");

		else if (c == 3)
			printf("당신은 이겼습니다.\n");
	}

	else if (u == 2)   //유저가 바위일때
	{
		if (c == 1)
			printf("당신은 이겼습니다.\n");

		else if (c == 2)
			printf("당신은 비겼습니다.\n");

		else if (c == 3)
			printf("당신은 졌습니다.\n");
	}

	else if (u == 3)   //유저가 보일때
	{
		if (c == 1)
			printf("당신은 졌습니다.\n");

		else if (c == 2)
			printf("당신은 이겼습니다.\n");

		else if (c == 3)
			printf("당신은 비겼습니다.\n");
	}
}