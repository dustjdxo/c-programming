#pragma once
#include <stdio.h>

int show(char* s, int u)	// char* s = str;   int u = user_choic int c = com_choice;
{

	if (!strncmp(s, "����"))
	{
		u = 1;
	}

	if (!strncmp(s, "����"))
	{
		u = 2;
	}

	if (!strncmp(s, "��"))
	{
		u = 3;
	}


	if (u == 1)
		printf("������ ������ ���� '����' �Դϴ�. \n");

	if (u == 2)
		printf("������ ������ ���� '����' �Դϴ�. \n");

	if (u == 3)
		printf("������ ������ ���� '��' �Դϴ�. \n");

	return u;
}

void show2(int c)
{

	if (c == 1)
		printf("��ǻ�Ͱ� ������ ���� '����' �Դϴ�. \n");

	if (c == 2)
		printf("��ǻ�Ͱ� ������ ���� '����' �Դϴ�. \n");

	if (c == 3)
		printf("��ǻ�Ͱ� ������ ���� '��' �Դϴ�. \n");
}

void compare(int c, int u)    // 
{
	if (u == 1)   //������ �����϶�
	{
		if (c == 1)
			printf("���º� �Դϴ�.\n");

		else if (c == 2)
			printf("����� �����ϴ�.\n");

		else if (c == 3)
			printf("����� �̰���ϴ�.\n");
	}

	else if (u == 2)   //������ �����϶�
	{
		if (c == 1)
			printf("����� �̰���ϴ�.\n");

		else if (c == 2)
			printf("����� �����ϴ�.\n");

		else if (c == 3)
			printf("����� �����ϴ�.\n");
	}

	else if (u == 3)   //������ ���϶�
	{
		if (c == 1)
			printf("����� �����ϴ�.\n");

		else if (c == 2)
			printf("����� �̰���ϴ�.\n");

		else if (c == 3)
			printf("����� �����ϴ�.\n");
	}
}