#include <stdio.h>

int keyboard(int money);
//int mouse();
//int notebook();

int main()
{
	int money;
	int menu;
	int rest = 0;

	printf("����� ���� �������� �Է��Ͻÿ�. : ");
	scanf(" %d", &money);

	while (1)
	{

		printf("mmmmmmmmmmmmmmmmm ��ǻ�� �ٳ��� mmmmmmmmmmmmmmmmm\n\n");
		printf("1. Ű����\n");
		printf("2. ���콺\n");
		printf("3. ��Ʈ��\n\n");
		printf("mmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmm\n\n");

		scanf(" %d", &menu);

		if (menu == 1)
		{
			money = keyboard(money);
			printf("���� ���� ���� �������� %d �Դϴ�.\n", money);
		}

		//if (menu == 2)
		//	mouse();

		//if (menu == 3)
		//	notebook();

	}
}
int keyboard(int money)
{
	int key;
	printf("Ű���带 �����մϴ�.\n");
	printf("1. 1����\n");
	printf("2. 3����\n");
	printf("3. 5����\n");
	scanf(" %d", &key);

	if (key == 1)
		money = money - 10000;

	if (key == 2)
		money = money - 30000;

	if (key == 3)
		money = money - 50000;

	return money;
}


//int mouse()
//{
//
//}
//int notebook()
//{
//
//}


	// ��ǻ�� ��� ��� ���α׷�
	// ���� ó�� �޴��� ���´� 1�� Ű����() 2�� ���콺 3�� ����Ŀ
	// �� �� �ִ��� ���� ���� ������ ���� ��ŭ ����