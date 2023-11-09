#include "setting.h"

void color()
{
	SetConsoleTitleA((LPCSTR)"Snake");
	CONSOLE_CURSOR_INFO cursor_info = { 20, 0 };
	SetConsoleCursorInfo(GetStdHandle(STD_OUTPUT_HANDLE), &cursor_info);

	while (1)
	{
		system("cls");
		printf("%s\n%s\n%s\n%s\n%s\n%s\n%s\n%s\n%s\n%s\n%s\n%s\n", "设置/颜色设置", "------------------------------------------------------------------------------------------------------", "|     1 = 黑色       9 = 灰色                                                                        |", "|     2 = 蓝色       A = 淡蓝色                                                                      |", "|     3 = 绿色       B = 淡绿色                                                                      |", "|     4 = 浅绿色     C = 淡浅绿色                                                                    |", "|     5 = 红色       D = 淡红色                                                                      |", "|     6 = 紫色       E = 淡紫色                                                                      |", "|     7 = 黄色       F = 淡黄色                                                                      |", "|     8 = 白色       G = 亮白色                                                                      |", "|                                                                                                    |", "| 0.返回                                                                                             |");

		for (int i = 0; i < 15; ++i)
		{
			printf("%s\n", "|                                                                                                    |");
		}

		printf("%s\n%s", "------------------------------------------------------------------------------------------------------", "按下对应键以选择");
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
	printf("%s\n%s\n%s\n%s\n%s\n", "设置/关于Snake/彩蛋", "------------------------------------------------------------------------------------------------------", "|                                                                                                    |", "| 恭喜你发现了这个彩蛋                                                                               |", "| 给你一个链接：https://www.bilibili.com/video/BV1GJ411x7h7/                                         |");

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
	printf("%s\n%s\n%s\n%s\n%s\n%s\n%s\n%s\n%s\n%s\n%s\n%s\n%s\n%s\n%s\n%s\n%s\n%s\n%s\n%s\n%s\n%s\n%s\n%s\n%s\n%s\n%s\n%s\n", "设置/关于Snake", "------------------------------------------------------------------------------------------------------", "|                                                                                                    |", "|                                                                                                    |", "|                         ___                                                                        |", "|                        /   \\            |                                                          |", "|                        \\___             |    __                                                    |", "|                            \\ |--\\   --| |/  /  \\                                                   |", "|                            | |   | /  | |\\  |--/                                                   |", "|                        \\---/ |   | \\__| | \\ \\__                                                    |", "|      Snake 23年科技艺术节专用版                                                                    |", "|                by 韩健桐                                                                           |", "|                                                                                                    |", "|                                                                                                    |", "|                                                                                                    |", "|                                                                                                    |", "|                                                                                                    |", "|                                                                                                    |", "|                                                                                                    |", "|                                                                                                    |", "|                                                                                                    |", "|                                                                                                    |", "|                                                                                                    |", "|                                                                                                    |", "|                                                                                                    |", "|                                                                                                    |", "|                                                                                                    |", "------------------------------------------------------------------------------------------------------");
	printf("%s", "请按任意键继续. . .");
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
		printf("%s\n%s\n%s\n%s\n%s\n%s\n", "设置", "------------------------------------------------------------------------------------------------------", "| 1.颜色设置                                                                                         |", "| 2.关于                                                                                             |", "|                                                                                                    |", "| 0.返回                                                                                             |");

		for (int i = 0; i < 21; ++i)
		{
			printf("%s\n", "|                                                                                                    |");
		}

		printf("%s\n%s", "------------------------------------------------------------------------------------------------------", "按下对应数字键以进入");
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
