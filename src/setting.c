#include "setting.h"

void color()
{
	SetConsoleTitleA((LPCSTR)"Snake");
	CONSOLE_CURSOR_INFO cursor_info = { 20, 0 };
	SetConsoleCursorInfo(GetStdHandle(STD_OUTPUT_HANDLE), &cursor_info);

	while (1)
	{
		system("cls");
		printf("%s\n%s\n%s\n%s\n%s\n%s\n%s\n%s\n%s\n%s\n%s\n%s\n", "����/��ɫ����", "------------------------------------------------------------------------------------------------------", "|     1 = ��ɫ       9 = ��ɫ                                                                        |", "|     2 = ��ɫ       A = ����ɫ                                                                      |", "|     3 = ��ɫ       B = ����ɫ                                                                      |", "|     4 = ǳ��ɫ     C = ��ǳ��ɫ                                                                    |", "|     5 = ��ɫ       D = ����ɫ                                                                      |", "|     6 = ��ɫ       E = ����ɫ                                                                      |", "|     7 = ��ɫ       F = ����ɫ                                                                      |", "|     8 = ��ɫ       G = ����ɫ                                                                      |", "|                                                                                                    |", "| 0.����                                                                                             |");

		for (int i = 0; i < 15; ++i)
		{
			printf("%s\n", "|                                                                                                    |");
		}

		printf("%s\n%s", "------------------------------------------------------------------------------------------------------", "���¶�Ӧ����ѡ��");
		int ch = _getch();

		if (ch == '1')
		{
			system("color 07");
		}
		else if (ch == '2')
		{
			system("color 17");
		}
		else if (ch == '3')
		{
			system("color 27");
		}
		else if (ch == '4')
		{
			system("color 30");
		}
		else if (ch == '5')
		{
			system("color 47");
		}
		else if (ch == '6')
		{
			system("color 57");
		}
		else if (ch == '7')
		{
			system("color 60");
		}
		else if (ch == '8')
		{
			system("color 70");
		}
		else if (ch == '9')
		{
			system("color 87");
		}
		else if (ch == 'A' || ch == 'a')
		{
			system("color 90");
		}
		else if (ch == 'B' || ch == 'b')
		{
			system("color A0");
		}
		else if (ch == 'C' || ch == 'c')
		{
			system("color B0");
		}
		else if (ch == 'D' || ch == 'd')
		{
			system("color C7");
		}
		else if (ch == 'E' || ch == 'e')
		{
			system("color D7");
		}
		else if (ch == 'F' || ch == 'f')
		{
			system("color E0");
		}
		else if (ch == 'G' || ch == 'g')
		{
			system("color F0");
		}
		else if (ch == '0')
		{
			break;
		}
	}

	return;
}

void egg_hunt()
{
	SetConsoleTitleA((LPCSTR)"Snake");
	CONSOLE_CURSOR_INFO cursor_info = { 20, 0 };
	SetConsoleCursorInfo(GetStdHandle(STD_OUTPUT_HANDLE), &cursor_info);
	system("cls");
	printf("%s\n%s\n%s\n%s\n%s\n", "����/����Snake/�ʵ�", "------------------------------------------------------------------------------------------------------", "|                                                                                                    |", "| ��ϲ�㷢��������ʵ�                                                                               |", "| ����һ�����ӣ�https://www.bilibili.com/video/BV1GJ411x7h7/                                         |");

	for (int i = 0; i < 22; ++i)
	{
		printf("%s\n", "|                                                                                                    |");
	}

	printf("%s\n", "------------------------------------------------------------------------------------------------------");
	system("pause");
	
	return;
}

void about()
{
	SetConsoleTitleA((LPCSTR)"Snake");
	CONSOLE_CURSOR_INFO cursor_info = { 20, 0 };
	SetConsoleCursorInfo(GetStdHandle(STD_OUTPUT_HANDLE), &cursor_info);
	system("cls");
	printf("%s\n%s\n%s\n%s\n%s\n%s\n%s\n%s\n%s\n%s\n%s\n%s\n%s\n%s\n%s\n%s\n%s\n%s\n%s\n%s\n%s\n%s\n%s\n%s\n%s\n%s\n%s\n%s\n", "����/����Snake", "------------------------------------------------------------------------------------------------------", "|                                                                                                    |", "|                                                                                                    |", "|                         ___                                                                        |", "|                        /   \\            |                                                          |", "|                        \\___             |    __                                                    |", "|                            \\ |--\\   --| |/  /  \\                                                   |", "|                            | |   | /  | |\\  |--/                                                   |", "|                        \\---/ |   | \\__| | \\ \\__                                                    |", "|      Snake 23��Ƽ�������ר�ð�                                                                    |", "|                by ����ͩ                                                                           |", "|                                                                                                    |", "|                                                                                                    |", "|                                                                                                    |", "|                                                                                                    |", "|                                                                                                    |", "|                                                                                                    |", "|                                                                                                    |", "|                                                                                                    |", "|                                                                                                    |", "|                                                                                                    |", "|                                                                                                    |", "|                                                                                                    |", "|                                                                                                    |", "|                                                                                                    |", "|                                                                                                    |", "------------------------------------------------------------------------------------------------------");
	printf("%s", "�밴���������. . .");
	int key = _getch();

	if (key == 224)
	{
		egg_hunt();
	}

	return;
}

void setting()
{
	SetConsoleTitleA((LPCSTR)"Snake");
	CONSOLE_CURSOR_INFO cursor_info = { 20, 0 };
	SetConsoleCursorInfo(GetStdHandle(STD_OUTPUT_HANDLE), &cursor_info);

	while (1)
	{
		system("cls");
		printf("%s\n%s\n%s\n%s\n%s\n%s\n", "����", "------------------------------------------------------------------------------------------------------", "| 1.��ɫ����                                                                                         |", "| 2.����                                                                                             |", "|                                                                                                    |", "| 0.����                                                                                             |");

		for (int i = 0; i < 21; ++i)
		{
			printf("%s\n", "|                                                                                                    |");
		}

		printf("%s\n%s", "------------------------------------------------------------------------------------------------------", "���¶�Ӧ���ּ��Խ���");
		int ch = _getch();

		if (ch == '1')
		{
			color();
		}
		else if (ch == '2')
		{
			about();
		}
		else if (ch == '0')
		{
			break;
		}
	}

	return;
}
